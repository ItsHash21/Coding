/*Write a program that returns minimum element in an array.
Input Format:
First line input contains and integer N
Next line contains N integers separated by space.
Output Format:
First line of output prints the minimum element in the array.

Constraints:
1<=N<=10^5
Note:
It is advisable to declare an array with a size that can accommodate all the elements, considering that N has a maximum value of 10^5.

Input 1:
5 
6 4 3 8 9
Output 1:
3


Input 2:
4
8 8 8 8
Output 2:
8
*/
#include<iostream>
#include<climits>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int arr[100000];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int min=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	cout<<min;
}
