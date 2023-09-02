/*
Print the following pattern for given number of rows.
Input format :

Line 1 : N (Total number of rows)

Sample Input :
   5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1
*/

#include<iostream>
using namespace std;


int main(){

  int n;
  cin>>n;
  int i=1;
  while(i<=n)
  {
    int j=1;
    while(j<=n-i+1)
    {
      cout<<j;
      j++;
    }
    int star=1;
    while(star<=2*i-2)
    {
      cout<<"*";
      star++;
    }
    j=n-i+1;
    while(j>=1)
    {
      cout<<j;
      j--;
    }
    cout<<endl;
    i++;
  }
}


