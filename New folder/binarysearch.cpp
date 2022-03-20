#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int start, int end, int x)
{
    int mid;
    if(end>=start)
    {
        mid=(start+end)/2;

        if(arr[mid]==x){
            return mid+1;
        }
        else if(arr[mid]<x){
            return binarysearch(arr, mid+1,end,x);
        }
        else
        return binarysearch(arr,start,mid-1,x);
    }
    return -1;
}



int main()
{
    int arr[]={30,40,20,99,100,52};
    int x=99;
    int n= sizeof(arr)/sizeof(arr[0]);

    int result = binarysearch(arr,0,n-1,x);
    if(result==-1)
       cout<<"Element not found!!"<<endl;
    else
    cout<<"Element found at index: "<<result<<endl;


}

