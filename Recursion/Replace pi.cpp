/*
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

Constraints :
1 <= |S| <= 50
where |S| represents the length of string S. 

Sample Input 1 :
xpix
Sample Output :
x3.14x

Sample Input 2 :
pipi
Sample Output :
3.143.14

Sample Input 3 :
pip
Sample Output :
3.14p

Constraints:-
1<=|S|<=50
*/
#include <iostream>
using namespace std;

// Change in the given string itself. So no need to return or print anything

void replacePi(char input[]) 
{
	int size = sizeof(input) / sizeof(input[0]);
	if(input[0]=='\0'|| input[1]=='\0')
	{
		return;
	}
	if(input[0]!='p' || input[1]!='i')
	{
		return replacePi(input+1);
	}
	else
	{
		int lastIndex=0;
		while(input[lastIndex]!='\0')
		{
			lastIndex++;
		}
		while(lastIndex>=2)
		{
			input[lastIndex+2]=input[lastIndex];
			lastIndex--;
		}
		input[0]='3';
		input[1]='.';
		input[2]='1';
		input[3]='4';
		replacePi(input+4);
	}
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
