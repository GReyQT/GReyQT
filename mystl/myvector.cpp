#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;
	
	vec.push_back(20);
	vec.push_back(30);

	/*
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << endl;
	}
	vec.pop_back();
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << endl;
	}
	*/

	vector<int>::iterator ptr;
	ptr = vec.begin();
	vec.insert(ptr+1, 11);


	for (ptr = vec.begin(); ptr != vec.end(); ptr++)
	{
		cout << "vec:" << *ptr << endl;
	}

	return 0;
}