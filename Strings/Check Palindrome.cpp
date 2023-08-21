/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters.
Palindrome
A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards.

Example:
If the input string happens to be, "malayalam" then as we see that this word can be read the same as forward and backwards, 
it is said to be a valid palindrome.The expected output for this example will print, 'Palindrome'.
From that being said, you are required to return a boolean value from the function that has been asked to implement.


Input Format:
The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string would be in lower case.
Output Format:
The only line of output prints either 'Palindrome' or 'Not a Palindrome'.
Note:
You are not required to print anything. It has already been taken care of. Just complete the given function, return true if the given 
string is a palindrome and false otherwise.

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second


Sample Input 1 :
abcdcba
Sample Output 1 :
Palindrome 

Sample Input 2:
coding
Sample Output 2:
Not a Palindrome
*/

#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str) 
{
    int n=str.size();
    bool flag=true;
    for(int i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1])
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string a;
    cin>>a;
    cout << (checkPalindrome(a) ? "Palindrome" : "Not a Palindrome");
}
