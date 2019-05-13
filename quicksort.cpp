#include <iostream>
using namespace std;
void Swap(int &a,int &b)
{
	int temp=a;
	a = b;
	b = temp;
}
int Partition(int *a,int low,int high)
{
	int privote = high;
	int ptr = low;
	for(int i=low;i<=high-1;i++)
	{
		if(a[i] <= a[privote])
		{
			Swap(a[ptr],a[i]);
			ptr++;
		}
	}
	
	Swap(a[ptr],a[privote]);
	
	return ptr;
	
	
	
	
}


void QuickSort(int *a,int low,int high)
{
	if(low>=high) return;
	int privote = Partition(a,low,high);
	QuickSort(a,low,privote-1);
	QuickSort(a,privote+1,high);
}

int main()
{
	int a[] = {3,2,1,-9,10,7,6};
	QuickSort(a,0,6);
	for(int x:a)
	{
		cout<<x<<" ";
	}
	return 0;
}