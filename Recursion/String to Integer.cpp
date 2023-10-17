/*
Write a recursive function to convert a given string into the number it represents. 
That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.

Input format :
Numeric string S (string, Eg. "1234")
Output format :
Corresponding integer N (int, Eg. 1234)

Constraints :
0 < |S| <= 9
where |S| represents length of string S.

Sample Input 1 :
00001231
Sample Output 1 :
1231

Sample Input 2 :
12567
Sample Output 2 :
12567
*/
#include <iostream>
using namespace std;
#include<cmath>

int stringToNumber(char input[]) 
{
    int len=0;
    while(input[len]!='\0')
    {
        len++;
    }
    if(len==1)
    {
        int b=input[0];
        return (b- '0');
    }
    
        int b=input[0]- '0';;
        char a[10];
        for(int i=0;i<=len-1;i++)
        {
            a[i]=input[i+1];
        }
        a[len-1]='\0';
        int ans=b*pow(10,len-1)+stringToNumber(a);
        return ans;
    
}
int main() 
{
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
