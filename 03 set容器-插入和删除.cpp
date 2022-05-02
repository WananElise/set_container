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
//setÈİÆ÷²åÈëºÍÉ¾³ı
void test01()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(50);
	s1.insert(30);
	s1.insert(70);
	s1.insert(80);
	myprintSet(s1);

	//É¾³ı
	s1.erase(s1.begin());
	myprintSet(s1);
	s1.erase(30);
	myprintSet(s1);
	s1.erase(s1.begin(),s1.end());
	myprintSet(s1);
	s1.clear();
	myprintSet(s1);

}

int main()
{
	test01();


	system("pause");
	return 0;
}