//program to demonstrate calculating trailing zeroes in factorial
//without calculating the actual result of N factorial we can find how many trailing zeroes present in result

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int res =0;
    
    for(int i=5;i<=num;i=i*5)
       res = res+(num/i);
    
    cout<<res;
    return 0;
}

//Example input N =251
// output = 62
