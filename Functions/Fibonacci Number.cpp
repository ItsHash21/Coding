/*
Given a number N, figure out if it is a member of fibonacci series or not. 
Return true if the number is member of fibonacci series else false.
Note:
Fibonacci series is the series of numbers where each number is obtained by adding two previous numbers. 
The first two numbers in the Fibonacci series are 0 and 1.

Detailed explanation ( Input/output format, Notes, Images )
Input Format :
Integer N
Output Format :
true or false

Constraints :
0 <= n <= 10^4

Sample Input 1 :
5
Sample Output 1 :
true
Sample Input 2 :
14
Sample Output 2 :
false    
*/
#include<iostream>
using namespace std;
bool checkMember(int n){

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */
      int a=0,b=1;
      while(a<=n)
      {
        if(n==0)
        {
          return true;
        }
        int sum=a+b;
        a=b;
        b=sum;

        if(a==n)
        {
          return true;
        }
      
      }return false;

}

int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}
