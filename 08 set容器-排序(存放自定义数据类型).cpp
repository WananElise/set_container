#include<iostream>
using namespace std;
#include<set>
#include<string>

//set��������Զ����������� ����

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
		//����������н���
		return p1.m_age > p2.m_age;

	}


};

void test01()
{
	//�Զ����������� ����ָ���������
	set<person, mycomparePerson>s1;
	person p1("����", 28);
	person p2("����", 19);
	person p3("����", 16);
	person p4("����", 15);
	person p5("С��", 14);




	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p4);
	s1.insert(p5);
	s1.insert(p3);

	for (set<person, mycomparePerson>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << "������" << it->m_name << " ���䣺" << it->m_age << endl;
	}


}



int main()
{

	test01();

	system("pause");
	return 0;
}