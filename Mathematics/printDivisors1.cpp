//first method to print prime factors of a number

#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n)
{
    for(int i =2;i*i<=n;i++)
     {
        while(n%i==0)
         {
             cout<<i<<" ";
             n=n/i;
         }
     }
     if(n>1) cout<<n;
}


int main()
{
    int number;
    cin>>number;
    printDivisors(number);
    
    return 0;
}

