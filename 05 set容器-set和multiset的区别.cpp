#include<iostream>
using namespace std;
#include<set>


void test01()
{
	set<int>s1;

	pair<set<int>::iterator, bool> ret = s1.insert(10);

	if (ret.second)
	{
		cout << "����ɹ�" << endl;
	}
	else
	{
		cout << "����ʧ��" << endl;
	}

	ret = s1.insert(10);
	if (ret.second)
	{
		cout << "����ɹ�" << endl;
	}
	else
	{
		cout << "����ʧ��" << endl;
	}

	multiset<int>s2;
	//��������ظ�ֵ
	s2.insert(10);
	s2.insert(10);
	for (multiset<int>::iterator it = s2.begin(); it != s2.end(); it++)
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