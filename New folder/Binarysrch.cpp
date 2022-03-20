#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
	for(int i=1; i<n; i++)
	{
		int key = arr[i];
		int j = i - 1;

		while(arr[j]>key && j>=0)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

void swap(int *a, int *b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}
void printArray(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout << arr[i] << "  ";
		//printf("%d ", arr[i]);
	}
	cout << endl;
	//printf("\n");
}

int binary_search_recusion(int arr[], int low, int high, int skey){

int mid;
if(high>=low){
    mid = (low+high)/2;
    if(arr[mid]==skey){
        return mid;
    }
    else if(arr[mid]<skey){
        return binary_search_recusion(arr, mid+1, high, skey);
    }
    else
        return binary_search_recusion(arr,low,mid-1,skey);

}
return -1;




}


int main()
{
   int arr[]={2,1,-5,7,-10,3};
   int n=sizeof(arr)/sizeof(arr[0]);
   int skey=7;

    printArray(arr,n);
    insertionSort(arr, n);
    printArray(arr, n);

    int result = binary_search_recusion(arr,0, n-1,skey);
    if(result==-1)
    {
      cout<<"Value not found"<<endl;
    }
    else
        cout<<"Value found at index: "<<result<<endl;

}

