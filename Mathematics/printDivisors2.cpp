//program to print prime factors of given Number N
//Timecomplexity : O(sqrt(n)) when N is prime 

#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n)
{
    if(n<=1) return ;
    while(n%2 == 0)
    {
      cout<<"2"<<" ";
      n/=2;
    }
  
    while(n%3 == 0)
    {
        cout<<"3"<<" ";
      n/=3;
    } 
  
    for(int i =5;i*i<=n;i=i+6)
    {
        while(n % i ==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
        while(n % (i+2) == 0)
        {
            cout<<(i+2)<<" ";
            n/=(i+2);
        }
    }
  
    if(n>3) cout<<n;  //corner case 
}


int main()
{
    int number;
    cin>>number;
    printDivisors(number);
    return 0;
}

