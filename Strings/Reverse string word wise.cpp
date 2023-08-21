/*
Reverse the given string word-wise. The last word in the given string should come at 1st place, 
the last-second word at 2nd place, and so on. Individual words should remain as it is.

Input format:
The first and only line of input contains a string without any leading and trailing spaces.
Output format :
The only line of the output prints the Word wise reversed string.


Constraints :
0 <= |S| <= 10^5
where |S| represents the length of string, S.


Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome


Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
*/

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

string reverseStringWordWise(string input)
{
    int n=input.size();
    reverse(input.begin(),input.end());
    int i=0;
    while(i<n)
    {   int a=i;
        while(i<n&&input[i]!=' ')
        {   i++;
        }
        int b=i-1;
        while(a<b)
        {   swap(input[a++],input[b--]);

        }
        i++;
    }
    return input;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
