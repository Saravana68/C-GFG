// Method one to compute power using recursion
// timecomplexiy : O(logn)
// spaceComplexity: O(logn)

#include<bits/stdc++.h>
using namespace std;
int computePower(int x,int n)
{
    if(n == 0) return 1;
    int temp = computePower(x,n/2);
    temp = temp * temp;
    if(n%2 == 0)  return temp;
    else return temp*x;   
}
int main()
{
    int number,power;
    cin>>number>>power;
    cout<<computePower(number,power);
    return 0;
}


