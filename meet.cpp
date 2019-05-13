#include <iostream>
#include <algorithm>
#include <vector>
#define MaxSize 1000
using namespace std;
struct Meet{
	double begin;//��ʼʱ��
	double end;//����ʱ��
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
	cout<<"��ʼʱ��:"<<a.begin<<"      ����ʱ��:"<<a.end<<"    ����ı��:"<<a.index<<endl;
}
int main()
{
	cout<<"������һ��������Ŀ:";
	int meet_number;
	cin>>meet_number;
	int i;
	for(i=0;i<meet_number;i++)
	{
		cout<<"���������Ŀ�ʼʱ��:";
		cin>>meet[i].begin;
		cout<<"���������Ľ���ʱ��:";
		cin>>meet[i].end;
		meet[i].index = i+1;  //��ʾ�ڼ������飻
	}
	//���������ʱ��+��̳���ʱ������
	sort(meet,meet+i,cmp);
	//��ʼѡ��
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
	cout<<"��ӡһ��Ļ���:"<<endl;
	for_each(meet,meet+i,print);
	cout<<"ѡ������ʱ��:"<<endl;
	for_each(v_meet.begin(),v_meet.end(),print);
	return 0;
	
	
}