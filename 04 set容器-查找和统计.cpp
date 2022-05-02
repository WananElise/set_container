#include<iostream>
using namespace std;
#include<set>


void test01()
{
	//查找
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
		cout << "找到该元素:" <<*pos<< endl;
	}
	else
	{
		cout << "未找到该元素" << endl;
	}


}

 void test02()
{
	 //统计
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
	 //统计30的个数

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