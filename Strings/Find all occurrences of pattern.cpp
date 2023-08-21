/*
Given a string ‘str’ and a pattern ‘pat’, you have to find all occurrences of the pattern in the string. 
You have to print the starting positions of all occurrences of the pattern in the string.

Input Format:
First line contains the string  'str' and followed by string 'pat'.
Output Format:
All occurrences of patterns starting position separated by space.


Constraints:
1<str.size()<500
1<=pat.size()<=str.size


Sample Input 1:
‘str’ = “heyhihey”
‘pat’ = “hey”
Sample Output 1:
0 5
Explanation:
The pattern has a length of 3. We check each substring of the original string, starting from index 'i', 
to see if the first three characters match the pattern. If they do, 'i' is considered a valid index.

In the string "heyhihey":

At index 0, the substring "hey" matches the pattern, so 0 is a valid index.

At index 1, the substring "eyh" does not match the pattern, so 1 is not a valid index.

At index 2, the substring "yhi" does not match the pattern, so 2 is not a valid index.

At index 5, the substring "hey" matches the pattern, so 5 is a valid index.

Thus, the valid indices are 0 and 5.
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string pat;
    cin>>pat;
    int pSize=pat.size();
    int strSize=str.size();
    int l=0,r=pSize-1;
    while(r<strSize)
    {
        bool flag=true;
        for(int i=0;i<pSize;i++)
        {   if(pat[i]!=str[l+i])
            {   flag=false;
                break;
            }
        }
            if(flag==true)
            {   cout<<l<<" ";
            }
        l++,r++;
    }
}
