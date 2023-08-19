#include<iostream>
using namespace std;
int findLargest(int input[][10], int nRows, int mCols)
{   int colSum=0;
    for(int j=0;j<mCols;j++)
	{
		int sum=0;
                for (int i = 0; i < nRows; i++) {

                        sum += input[i][j];
                }
                if(colSum<sum)
                {   colSum=sum;
                }
    }
    //return colSum;

    int rowSum=0;
    for(int i=0;i<nRows;i++)
    {   int sum=0;
        for(int j=0;j<mCols;j++)
        {   sum+=input[i][j];
        }
        if(rowSum<sum)
        {   rowSum=sum;
        }
    }
    if(rowSum<colSum)
    {   return colSum;
    }
    else
    {   return rowSum;
    }
}
int main()
{   int input[10][10];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>input[i][j];
		}

	}
	cout<<endl<<"maximum sum is:";
	cout<<findLargest(input,n,m);
}
