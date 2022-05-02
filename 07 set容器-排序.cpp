#include<iostream>
using namespace std;
#include<set>

//set容器排序
class mycopare
{
public:
	bool operator() (int v1, int v2)const
	{
		return v1 > v2;
	}
};



void test01()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(50);
	s1.insert(70);
	s1.insert(20);
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	{

		cout << *it << " ";
	}
	cout << endl;
	//指定排序规则为从大到小
	set<int,mycopare>s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(50);
	s2.insert(70);
	s2.insert(20);
	for (set<int, mycopare>::iterator it = s2.begin(); it != s2.end(); it++)
	{

		cout << *it << " ";
	}
	cout << endl;
}



int main()
{
	test01();

	system("pause");
	return 0;
}