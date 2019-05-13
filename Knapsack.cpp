#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
const int M = 100;
struct three{
	double p;//性价比
	double w;//重量
	double v; //价格
}S[M];
struct SortRules{
	bool operator()(three a,three b)
	{
		return a.p > b.p;
	}
};
int main()
{
	cout<<"请输入毛驴的载重量和物品的个数:"<<endl;
	double m;
	int n;
	cin>>m;
	cin>>n;	//m载重量  n物品的个数
	
	for(int i=0;i<n;i++)
	{
		cout<<"请输入物品的价格:";
		cin>>S[i].v;
		cout<<"请输入物品的重量:";
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