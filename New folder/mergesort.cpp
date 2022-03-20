
#include <ctime>
#include <iostream>

int recursiveMinimum(const int[], int, int);

static const int LIMIT = 10;

int main(int argc, const char *argv[]) {
    int n[LIMIT];

    srand(time(0));//from  w w  w  . j ava 2  s  . com

    for (int i = 0; i < LIMIT; ++i) {
        n[i] = rand() % LIMIT + 1;

        std::cout << n[i] << std::endl;
    }
    std::cout << "\nMinimum : " << recursiveMinimum(n, 0, LIMIT - 1) << std::endl;
    return 0;
}
// Returns the minimum value from an array recursively
int recursiveMinimum(const int n[], int start, int end) {
    static int minimum = n[start];

    if (start == end)
        return minimum;

    if (minimum < n[start + 1]) {
        return recursiveMinimum(n, ++start, end);
    }

    minimum = n[start + 1];
    return recursiveMinimum(n, ++start, end);
}
/*#include<bits/stdc++.h>
using mergespace std;

 int main(){
     void printArray(intA[],n}){
         for()

     void mergesort (intA[],int lb,int ub){
         int length=ub-lb+1;
         intB[length];
         int i=lb;int j=mid+1;
         int k =0;
         ehile(if<=mid&&j<=ub){
         if()



         }
     if(lb<ub){
        int mid=(lb+ub)/2;
        mergesort(A,lb,mid)
        mergesort(A,mid+1,ub)
        merge(A,lb,mid,ub);

     }

     void merge(intA[],int lb, int mid,int ub)
     {
         int length=ub-lb+1;
         int B[length];
     }
     int main()
 int A[]={1,4,3,11,35,34,10,2,10};
 int len;
 len=



 }


*//







