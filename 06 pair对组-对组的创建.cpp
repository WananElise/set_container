#include<iostream>
using namespace std;
#include<string>
//pair����Ĵ���
void test01()
{
	//��һ�ַ�ʽ
	pair<string, int>p("tom", 18);
	cout <<"������"<< p.first <<" ����"<< p.second << endl;
	//�ڶ��ַ�ʽ
	pair<string, int>p2 = make_pair("jerry", 17);
	cout << "������" << p2.first << " ����" << p2.second << endl;
}



int main()
{
	test01();
	system("pause");
	return 0;
}