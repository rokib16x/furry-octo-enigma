#include
using namespace std;
void merge(int a[],int low,int mid,int high)
{
int lsize = mid-low+1;
int rsize = high-mid;
int L[lsize+1];
int R[rsize+1];

for(int i=0;i {
L[i] = a[i+low];
}
L[lsize] = 99999;

for(int i=0;i {
R[i] = a[mid+1+i];
}
R[rsize]= 999999;

int i=0,j=0;

for(int k=0;k<=high;k++)
{
if(L[i] {
a[k] = L[i];
i++;
}
else
{
a[k] = R[j];
j++;
}
}
}

void merge_sort(int a[],int low,int high)
{
if(low {
int mid = (low+high)/2;
merge_sort(a,low,mid);
merge_sort(a,mid+1,high);
merge(a,low,mid,high);
}
}

int max_subarray(int a[],int low,int mid,int high)
{



int mid=(low+high)/2;
int lmax=max_subarray(a,low,mid);
int rmax=max_subarray(a,mid+1,high);
int cross_max=max_crossing_su
}

int max_cross(int a[])
void print_array()
{

}

int main()
{
int n;
cin >> n;
int array[n];

for(int i=0;i {
cin>>array[i];
}
merge_sort(array,0,n-1);
printarray(a,5);


int max_sum
return 0;
}
