#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=5;
    int *ptr;
    ptr= &a;

    cout<<"a: "<<a<<endl;;
    cout<<"ptr: "<<ptr<<endl;

    a =10;

    cout<<"a: "<<a<<endl;;
    cout<<"ptr: "<<ptr<<endl;

    cout<<"Value by ptr: "<<*ptr<<endl;

    *ptr = 20;

    cout<<"a: "<<a<<endl;;
    cout<<"ptr: "<<ptr;




}
