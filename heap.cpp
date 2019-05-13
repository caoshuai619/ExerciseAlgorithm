#include <iostream>
using namespace std;
void Swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

bool less(int a,int b)
{
	return a<b?true:false;
}

void swim(int *arr,int data,int pos)
{
	int len=sizeof(arr)/sizeof(int);
	int k=pos;
	int j;
	while(k<=1)
	{
		j=k/2;
		if(!less(arr[j],arr[k]) return;
		Swap(arr[j],arr[k]);
	}
}

void Heap()
{
	int *arr = new int[11];
	arr[0] = 99999;
	swim(arr,1,1);
	swim(arr,12,2);
	for(int i=1;i<=2;i++)
	{
		cout<<arr[i]<<endl;
	}
	
}


int main()
{
	Heap();
	return 0;
}