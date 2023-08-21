/*
For a given a string(str), find and return the highest occurring character.
Example:
Input String: "abcdeapapqarr"
Expected Output: 'a'
Since 'a' has appeared four times in the string which happens to be the highest frequency character, the answer would be 'a'.
If there are two characters in the input string with the same frequency, return the character which comes first.
Consider:
Assume all the characters in the given string to be in lowercase always.

Input Format:
The first and only line of input contains a string without any leading and trailing spaces.
Output Format:
The only line of output prints the updated string. 
Note:
You are not required to print anything explicitly. It has already been taken care of.

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second


Sample Input 1:
abdefgbabfba
Sample Output 1:
b

Sample Input 2:
xy
Sample Output 2:
x
*/

#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[]) {
    
    int len1=strlen(input);
    int freqArray[256]={0};
    for(int i=0;i<len1;i++)
    {   int val=input[i];
        freqArray[val]++;
    }

    char ans=input[0];
    int val=input[0];
    int count=freqArray[val];
    for(int i=1;i<len1;i++)
    {   int x=input[i];
        if(freqArray[x]>count)
        {
            count=freqArray[x];
            ans=input[i];
        }
    }
    return ans;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}
