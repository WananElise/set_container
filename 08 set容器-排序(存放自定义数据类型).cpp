#include<iostream>
using namespace std;
#include<set>
#include<string>

//set容器存放自定义数据类型 排序

class person
{
public:

	person(string name,int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;

};
class mycomparePerson
{
public:
	bool operator()(const person &p1, const person &p2)const
	{
		//按照年龄进行降序
		return p1.m_age > p2.m_age;

	}


};

void test01()
{
	//自定义数据类型 都会指定排序规则
	set<person, mycomparePerson>s1;
	person p1("张三", 28);
	person p2("李四", 19);
	person p3("王五", 16);
	person p4("赵六", 15);
	person p5("小明", 14);




	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p4);
	s1.insert(p5);
	s1.insert(p3);

	for (set<person, mycomparePerson>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << endl;
	}


}



int main()
{

	test01();

	system("pause");
	return 0;
}