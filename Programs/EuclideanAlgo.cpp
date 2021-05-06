//program to demonstrate working of Euclidean algorithm

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int GCD( int a,int b)
{
    if(b==0) return a;
    else return GCD(b,a%b);
}

int main()
{
   int num1,num2;
   cin>>num1>>num2;
   cout<<GCD(num1,num2);
   return 0;
}

//Timecomplexity :O(log(min(a,b)))
//spaceComplexity: O(log(min(a,b)))



