#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
const int M = 100;
struct three{
	double p;//�Լ۱�
	double w;//����
	double v; //�۸�
}S[M];
struct SortRules{
	bool operator()(three a,three b)
	{
		return a.p > b.p;
	}
};
int main()
{
	cout<<"������ë¿������������Ʒ�ĸ���:"<<endl;
	double m;
	int n;
	cin>>m;
	cin>>n;	//m������  n��Ʒ�ĸ���
	
	for(int i=0;i<n;i++)
	{
		cout<<"��������Ʒ�ļ۸�:";
		cin>>S[i].v;
		cout<<"��������Ʒ������:";
		cin>>S[i].w;
		S[i].p = S[i].v/S[i].w;
		
	}
	sort(S,S+n-1,SortRules());
	double sum=0;
	for(int i=0;i<n;i++)
	{
		if(m>S[i].w)
		{
			sum = S[i].v+sum;
			m-=S[i].w;
		}
		else{
			sum+=S[i].p*m;
			m=0;
			break;
		}
	}
	
	printf("sum = %f",sum);
	
	return 0;
}