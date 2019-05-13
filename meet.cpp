#include <iostream>
#include <algorithm>
#include <vector>
#define MaxSize 1000
using namespace std;
struct Meet{
	double begin;//开始时间
	double end;//结束时间
	int index;
}meet[MaxSize];

bool cmp(Meet a,Meet b)
{
	if(a.end == b.end)
	{
		return a.begin > b.begin;
	}
	return a.end < b.end;
}
void print(Meet a)
{
	cout<<"开始时间:"<<a.begin<<"      结束时间:"<<a.end<<"    会议的编号:"<<a.index<<endl;
}
int main()
{
	cout<<"请输入一天会议的数目:";
	int meet_number;
	cin>>meet_number;
	int i;
	for(i=0;i<meet_number;i++)
	{
		cout<<"请输入会议的开始时间:";
		cin>>meet[i].begin;
		cout<<"请输入会议的结束时间:";
		cin>>meet[i].end;
		meet[i].index = i+1;  //表示第几场会议；
	}
	//按最早结束时间+最短持续时间排序
	sort(meet,meet+i,cmp);
	//开始选择
	double end = meet[0].end;
	vector<Meet> v_meet;
	v_meet.push_back(meet[0]);
	for(int j=1;j<meet_number;j++)
	{
		if(meet[j].begin>= end)
		{
			v_meet.push_back(meet[j]);
			end = meet[j].end;
		}
	}
	cout<<"打印一天的会议:"<<endl;
	for_each(meet,meet+i,print);
	cout<<"选择会议的时间:"<<endl;
	for_each(v_meet.begin(),v_meet.end(),print);
	return 0;
	
	
}