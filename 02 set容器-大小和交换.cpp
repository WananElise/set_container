#include<iostream>
using namespace std;
#include<set>


void myprintSet(set<int>& s)
{

	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{

		cout << *it << " ";


	}

	cout << endl;
}




//��С
void test01()
{
	set<int>s;
	s.insert(10);
	s.insert(90);
	s.insert(60);
	s.insert(80);
	s.insert(30);
	s.insert(40);
	s.insert(20);
	myprintSet(s);
	if (!s.empty())
	{
		cout << "������Ϊ��" << endl;
		cout << "������СΪ:" << s.size() << endl;
	}
	else
	{
		cout << "����Ϊ��" << endl;
	}

}
//����
void test02()
{
	set<int>s;
	s.insert(10);
	s.insert(90);
	s.insert(60);
	s.insert(80);
	s.insert(30);
	s.insert(40);
	s.insert(20);
	set<int>s1;
	s1.insert(100);
	s1.insert(900);
	s1.insert(600);
	s1.insert(800);
	s1.insert(300);
	s1.insert(400);
	s1.insert(200);
	cout << "����ǰ" << endl;
	myprintSet(s);
	myprintSet(s1);

	s.swap(s1);
	cout << "������" << endl;
	myprintSet(s);
	myprintSet(s1);

	//set������֧��resize
}

int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}