/*
You are given the starting 'l' and the ending 'r' positions of the array 'ARR'.

You must sort the elements between 'l' and 'r'.

Note:
Change in the input array itself. So no need to return or print anything.
Example:
Input: ‘N’ = 7,
'ARR' = [2, 13, 4, 1, 3, 6, 28]

Output: [1 2 3 4 6 13 28]
Explanation: After applying 'merge sort' on the input array, the output is [1 2 3 4 6 13 28].

Input format :
The first line contains an integer <em>**'N'**</em> representing the size of the array/list.
The second line contains 'N' single space-separated integers representing the elements in the array/list.
Output format :
You don't need to return anything. In the output, you will see the array after you do the modification.


Sample Input 1:
7
2 13 4 1 3 6 28
Sample Output 1:
1 2 3 4 6 13 28
Explanation of Sample Output 1:
After applying 'merge sort' on the input array, the output is [1 2 3 4 6 13 28].


Sample Input 2:
5
9 3 6 2 0
Sample Output 2:
0 2 3 6 9
Explanation of Sample Output 2:
After applying 'merge sort' on the input array, the output is [0 2 3 6 9].

Constraints :
1 <= N <= 10^3
0 <= ARR[i] <= 10^9
*/
#include <iostream>
using namespace std;

void merge(int a[],int l,int r)
{
    int *c=new int[r-l+1];
    int k=0;
    int i=l;
    int mid=(l+r)/2;
    int j=mid+1;
    while(i<=mid && j<=r)
    {
        if(a[i]<=a[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<=r)
    {
        c[k]=a[j];
        j++;
        k++;
    }
    
    for (int i = 0; i <k; i++) {
    a[l+i] = c[i];
    }
    delete []c;
}

void mergeSort(int arr[], int l, int r) 
{
    if(l>=r)
    {
        return;
    }
    int mid=(l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,r);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, arr_size - 1);

    for(int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
