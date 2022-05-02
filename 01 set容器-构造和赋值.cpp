#include<iostream>
using namespace std;
#include<set>


void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}




//set容器构造和赋值
void test01()
{
	//默认构造函数
	set<int>s;//set容器只有insert插入的方式
	s.insert(10);
	s.insert(60);
	s.insert(30);
	s.insert(20);   //set容器不允许插入重复的数据 但不会报错
	s.insert(40);
	s.insert(20);
	printSet(s);
	set<int>s2(s);
	printSet(s2);

	//赋值
	set<int>s3;
	s3 = s2;
	printSet(s3);
}



int main()
{

	test01();


	system("pause");
	return 0;
}