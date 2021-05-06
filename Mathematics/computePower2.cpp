//program to compute power with efficient Method
//better than recursion because here space complexity is : O(1) 
//Timecomplexity is space as recursion Method: O(logn)

#include<bits/stdc++.h>
using namespace std;

int computePower(int x,int n)
{
    int result =1;
    while(n>0){
    if(n & 1)  
      result = result*x;
    x= x*x;
    n =n>>1;
    }
    return result;
    
}

int main()
{
    int number,power;
    cin>>number>>power;
    cout<<computePower(number,power);
    return 0;
 
}
