#include <iostream>
using namespace std;
//����һ������������е�һ���������һ�����ֵ��ظ���Ԫ��

// a={1,2,3,4,4,4,4,4,9,10};

int BinarySearchIndex(int *a,int n,int number)   //arr����,n���鳤�� numberҪ���ҵ�ֵ ���ز���ֵ���±꣬û�ҵ�����-1
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
			low=mid+1;  //��һ�����ֵ�λ��   //���һ�����ֵ�λ�� low = mid+1
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