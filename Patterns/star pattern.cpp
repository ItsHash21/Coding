/*
Print the following pattern

Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines

Constraints :
0 <= N <= 50


Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****

Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
*/

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int space=1;
		while(space<=n-i){
			cout<<' ';
			space=space+1;
		}
		int j=1;
		while(j<=i){
			cout<<"*";
			j++;
		}
		j=i-1;
		while(j>=1){
			cout<<"*";
			j--;
		}
		cout<<endl;
		i++;
	}
}
