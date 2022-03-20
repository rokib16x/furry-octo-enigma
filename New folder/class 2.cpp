#include<bits/stdc++.h>

using namespace std;
int fact(int n)
{
    if (n==1) return 1;
    return n * fact(n-1);

}

int power(int x,int y)
{
    if (y==0) return 1;

    return x * power(x,y-1);
}

int main()
{
    int result = power (2,0);
    cout<<result<<endl;
    return 0;
}
