//program to find first occurence of key using recursion
#include<bits/stdc++.h>
using namespace std;
int findOccurence( int *a,int n,int key)
{
    //base case
    if(n<1) return -1;
    if(a[0] == key)  return 0;
    
    //recursive call 
    int index = findOccurence(a+1,n-1,key);
    if(index ==-1) return -1;
    
    return index+1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++)
      cin>>arr[i];
     
    int key;
    cin>>key;
    cout<<findOccurence(arr,n,key);
    return 0;
}
