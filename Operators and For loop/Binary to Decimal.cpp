/*
Given a binary number as an integer N, convert it into decimal and print.

Detailed explanation ( Input/output format, Notes, Images )
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)

Constraints :
0 <= N <= 10^9

Sample Input 1 :
1100
Sample Output 1 :
12

Sample Input 2 :
111
Sample Output 2 :
7
*/
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int sum=0;
	for(int i=0;n>0;i++)
	{
		int rem=n%10;
		sum=sum+(pow(2,i)*rem);
		n=n/10;
	}
	cout<<sum;
}
