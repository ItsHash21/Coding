/*
Given the 'start' and the 'end'' positions of the array 'input'. Your task is to sort the elements between 'start' and 'end' using quick sort.


Note :
Make changes in the input array itself.

Input format :
Line 1 : Integer N i.e. Array size
Line 2 : Array elements (separated by space)
Output format :
Array elements in increasing order (separated by space)

Sample Input 1 :
6 
2 6 8 5 4 3
Sample Output 1 :
2 3 4 5 6 8

Sample Input 2 :
5
1 2 3 5 7
Sample Output 2 :
1 2 3 5 7 

Constraints :
1 <= N <= 10^3
0 <= input[i] <= 10^9
*/
#include <algorithm>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partitionArray(int input[], int start, int end) {
	// Write your code here
	int count_smaller_ele=0;
	for(int i=start+1;i<=end;i++)
	{
          if (input[i] < input[start]) {
				count_smaller_ele++;
          }
    }
	swap(input[start],input[start+count_smaller_ele]);

	int i=start,j=end;
	int partitionIndex=start+count_smaller_ele;
	int pivot=input[partitionIndex];
	while(i<partitionIndex && j>partitionIndex)
	{
		if(input[i]<pivot)
		{
			i++;
		}
		else if(input[j]>=pivot)
		{
			j--;
                } else {
                        swap(input[i], input[j]);
                }
    }
        return partitionIndex;
}

void quickSort(int input[], int start, int end) 
{
	if(start>=end)
	{
		return;
	}
	int pivotIndex=partitionArray(input,start,end);
	quickSort(input,start,pivotIndex-1);
	quickSort(input,pivotIndex+1,end);
}

class Runner {
    vector<int> v;

public:
    void takeInput() {
        int n;
        cin >> n;
        v.resize(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
    }

    void execute() {
        int n = (int)v.size();

        int* input = new int[n];
        for (int i = 0; i < n; i++)
            input[i] = v[i];

        quickSort(input, 0, n - 1);

        free(input);
    }

    void executeAndPrintOutput() {
        int n = (int)v.size();

        int* input = new int[n];
        for (int i = 0; i < n; i++)
            input[i] = v[i];

        quickSort(input, 0, n - 1);

        for (int i = 0; i < n; i++)
            cout << input[i] << ' ';
        cout << '\n';

        free(input);
    }
};

int main() {
    // freopen("./Testcases/large/in/input.txt", "r", stdin);
    // freopen("./Testcases/large/out/output.txt", "w", stdout);
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();
    return 0;
}
