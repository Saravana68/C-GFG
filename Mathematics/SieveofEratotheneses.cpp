// program to print number from 1 to N ; N is user input
// Time complexity:O(nloglogn);

#include<bits/stdc++.h>
using namespace std;

void primesieve(int n)
{
    vector<bool>sieve(n+1,true);
    for(int i =2;i<=n;i++)
    {
        if(sieve[i])
          {
              cout<<i<<" ";
              for(int j =i*i;j<=n;j=j+i)
                 sieve[j]= false;
          }
    }
}

int main()
{
    int number;
    cin>>number;
    primesieve(number);
    return 0;
 
}

