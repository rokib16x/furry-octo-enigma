#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int x)
{
   for(int i=0; i<n; i++){
       if(arr[i]==x)
           return i;
   }
   return -1;

}



int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=30;

    int result = search(arr,  n , x);
    if(result == -1)
       cout<<"Value not found: "<<endl;

    else
       cout<<"Value found at index: "<<result<<endl;

}
