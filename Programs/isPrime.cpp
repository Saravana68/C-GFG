//program to Check a given number is prime or not
//not a standard algo of O(n)  
//time complexity is O(sqrt(n))

#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n<=1) return false;
    if(n==2 || n==3) return true;
    if(n%2 == 0 || n%3==0) return false;
    for(int i =5;i*i<=n;i=i+6)
    {
        if(n%i == 0) return false;
        if(n% (i+2)==0) return false;
    }
    return true;
}

int main()
{
    int number;
    cin>>number;
    if(isprime(number)) cout<<"prime number";
    else cout<<"not a prime number";
    
    return 0;
}



