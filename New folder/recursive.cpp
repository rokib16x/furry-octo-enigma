#include<bits/stdc++.h>
using namespace std;
int find_min(int arr[],int n);
int main()
{
  int arr[]={5,1,-50,2,1,18};
  int len = sizeof(arr)/sizeof(arr[0]);
  int min_val=  find_min(arr,len);
  cout<<min_val;

  return 0;

}

int find_min(int arr[],int n)
{
    if(n==1)
        return arr[0];

  return min (find_min(arr,n-1),arr[n-1]);
}


