/*
Print the following pattern for the given number of rows.
Note: N is always odd.

Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines

Constraints :
1 <= N <= 49


Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *

Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    int n1=(n+1)/2;
    int n2=n1-1;
    
    while(i<=n1){
        int spaces=1,stars=1;
        while(spaces<=n1-i)
        {
            cout<<' ';
            spaces++;
        }

        while (stars <= (2 * i) - 1) {
          cout << "*";
          stars++;
        } 
        cout << endl;
        i++;
    }  
        int p=n2;
        while(p>=1){
        int spaces=1,stars=1;
        while(spaces<=n2-p+1)
        {
            cout<<' ';
            spaces++;
            
        }
        while(stars<=(2*p)-1)
        {
            cout<<"*";
            stars++;
            
        }
        cout<<endl;
        p--;
    }
}
