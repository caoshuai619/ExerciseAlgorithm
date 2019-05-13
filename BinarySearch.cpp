#include <iostream>
using namespace std;
//查找一个有序的数列中第一个或者最后一个出现的重复的元素

// a={1,2,3,4,4,4,4,4,9,10};

int BinarySearchIndex(int *a,int n,int number)   //arr数组,n数组长度 number要查找的值 返回查找值的下标，没找到返回-1
{
	int low = 0;
	int high = n-1;
	int res=-1;
	while(low<=high)
	{
		int mid = (low+high)>>1;
		
		if(a[mid]==number)
		{
			res = mid;
			low=mid+1;  //第一个出现的位置   //最后一个出现的位置 low = mid+1
		}
		else if(a[mid]<number)
		{
			low = mid+1;
		}
		else if(a[mid]>number)
		{
			high=mid-1;
		}
	}
	return res;
}


int main()
{
	int a[]={1,2,3,4,4,4,4,4,9,10};
	int n= sizeof(a)/sizeof(int);
	int index = BinarySearchIndex(a,n,4);
	cout<<"index:"<<index<<endl;
	system("pause");
	return 0;
}