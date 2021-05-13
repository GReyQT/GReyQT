#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void printName(list<string>& n)
{
	list<string>::iterator iter;
	for (iter = n.begin(); iter != n.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
}


int main()
{
	list<string> name;

	name.push_back("jason");
	name.push_back("kitty");
	name.push_back("tim");

	printName(name);
	/*
	list<string>::iterator iter;
	iter = name.begin();
	cout << "param: " << *iter << endl;
	cout << "param: " << *(++iter) << endl;
	*/
	
	//ɾ��ĳ��Ԫ��
	for (list<string>::iterator iter = name.begin(); iter != name.end(); iter++)
	{
		if (*iter == "kitty")
		{
			name.erase(iter);
			iter = name.begin();            // �������������ָ�������,���򱨴�
		}
	}

	printName(name);


	

	return 0;
}