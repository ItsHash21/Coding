/*
Print the following pattern for the given number of rows.

Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines

Constraints :
0 <= N <= 50


Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765

Sample Input 2:
4
Sample Output 2:
           1
         232
       34543
     4567654
*/

#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int spaces=1;
        while(spaces<=n-i)
        {
            cout<<' ';
            spaces+=1;
        }
        int j=1;
        int p=i;
        while(j<=i)
        {
            cout<<p;
            p++;
            j++;
        }
        j=(2*i)-2;
        while(j>i-1)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
}
