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




//set��������͸�ֵ
void test01()
{
	//Ĭ�Ϲ��캯��
	set<int>s;//set����ֻ��insert����ķ�ʽ
	s.insert(10);
	s.insert(60);
	s.insert(30);
	s.insert(20);   //set��������������ظ������� �����ᱨ��
	s.insert(40);
	s.insert(20);
	printSet(s);
	set<int>s2(s);
	printSet(s2);

	//��ֵ
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