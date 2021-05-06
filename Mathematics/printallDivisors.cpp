// program to print all divisors of number in different way
// Timecomplexity : O(sqrt(n))

#include<bits/stdc++.h>
using namespace std;

void printDivisors (int n)
{  
    int i;
    for( i = 1;i*i<n;i++)
       if(n%i==0) cout<<i<<" ";
  
   for(; i>=1;i--)
       if(n%i==0) cout<<(n/i)<<" ";
  
}

int main()
{
    int number;
    cin>>number;
    printDivisors(number);
    return 0;
  
}
