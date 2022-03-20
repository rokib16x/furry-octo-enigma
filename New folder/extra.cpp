#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i,j,key;
    for(i=1; i<n; i++)
    {
        key = arr[i];
        j= i-1;

        while(arr[j]>key && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

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
    int arr[]={10,60,30,50,40,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=30;

    insertionSort(arr, n);
    int result = search(arr,  n , x);
    if(result == -1)
       cout<<"Value not found: "<<endl;

    else
       cout<<"Value found at index: "<<result<<endl;

}
