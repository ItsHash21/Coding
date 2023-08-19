/*You are given a 2D array of integers ‘A’ of length ’N’x’N’, where ‘N’ is the number of rows and column. You will be also be given an output array of length 'N' along the square matrix. Fill the array with diagonal elements of square matrix.
A Square matrix is one that has an equal number of rows and columns.
Note: You don't have to return anything. You just to fill the output array.
Example:
Input:
3 3
1 2 3
4 5 6 
7 8 9

Output: 
1 5 9

Explanation:
The number of rows and columns is equal, so the given array forms a square matrix.
Input Format:
The first line  contains two integers ‘N’ separated by space.
The next ’N’ lines contain ‘N’ integers separated by space.
Output format:
First line of output contains N integers separated by single space.
Constraints :
1  <= N <= 50
1 <= A[i] <= 1000
Time Limit: 1 sec
Sample Input 1:
3
1 2 3
4 5 6
7 8 9
Sample Output 1:
1 5 9
  */
#include<iostream>
using namespace std;

void squareMatrix(int n,int arr[][100],int output[])
{
    //100 is just the upper limit, you just have to access till n
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                int k=i;
                output[k]=arr[i][j];
              
            }
        }
    }

}

int main()
{
    int n;
    cin>>n;
    int arr[n][100];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int output[n];
    squareMatrix(n,arr,output);
    for(int i = 0;i<n;i++)
    {
        cout<<output[i]<<" ";
    }

}
