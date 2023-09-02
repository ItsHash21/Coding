/*
You have been given an array/list. Your task is to return the number of inversions. 
Inversions in selection sort refers to difference between the indexes of pairs of elements that are in the wrong order and required swapping.
Example:
Input: ‘N’ = 5 
‘A’ = [3, 2, 11, 5, 1]

Output: 6

Input format :
The first line contains an Integer 'N', which denotes the size of the array/list.
The second line contains 'N' single space-separated integers representing the elements in the array/list.
Output Format :
Return the number of inversions.

Constraints :
1 <= N <= 10^4
1 <= nums[i] <= 10^9
Time Limit: 1 sec


Sample Input 1:
5
3 2 5 11 1
Explanation
Sample Output 1:
6

Sample Input 2:
7
17 5 14 16 11 18 10
Sample Output 2:
10
*/

#include<iostream>
using namespace std;

int getInversions(int arr[], int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {   
        int min=arr[i],minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
        count=count+(minIndex-i);
    }
  return count;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
	    cin>>arr[i];
    }
    int ans = getInversions(arr, n);
    cout << ans << endl;
    return 0;
}
