#include<iostream>
using namespace std;
#include<set>


void test01()
{
	//����
	set<int>s1;
	s1.insert(60);
	s1.insert(50);
	s1.insert(90);
	s1.insert(80);
	s1.insert(70);
	s1.insert(30);

	set<int>::iterator pos = s1.find(300);
	if (pos != s1.end())
	{
		cout << "�ҵ���Ԫ��:" <<*pos<< endl;
	}
	else
	{
		cout << "δ�ҵ���Ԫ��" << endl;
	}


}

 void test02()
{
	 //ͳ��
	 set<int>s1;
	 s1.insert(60);
	 s1.insert(50);
	 s1.insert(90);
	 s1.insert(80);
	 s1.insert(70);
	 s1.insert(30);
	 s1.insert(70);
	 s1.insert(70);
	 s1.insert(70);
	 s1.insert(70);
	 //ͳ��30�ĸ���

	 int num = s1.count(70);
	 cout << num << endl;

}


int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}