#include<iostream>
using namespace std;
int linear_search(int arr[], int n, int skey )
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==skey)
            return i;

    }
    return -1;

}


int main()
{

    int arr[]={2,1,-5,7,-10,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int skey=7;

    int result= linear_search(arr , n, skey);
    if(result == -1)
    {
        cout<<"Value not found"<<endl;

    }
    else
        cout<<"Value found at index: "<<result<<endl;



}
