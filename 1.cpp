#include <iostream>
#include <string>

using namespace std;

class rectange
{
private:
	string name;
	int wight;
	int height;

public:
	void rect_init(string n, int w, int h)
	{
		name = n;
		wight = w;
		height = h;
	}
	int get_perimeter()
	{
		return 2 * (wight + height);
	}
	int get_area()
	{
		return wight * height;
	}
	void showName()
	{
		cout << "name: " << name << endl;
	}
};

int main()
{
	rectange rect;
	rect.rect_init("rect", 4, 2);

	cout << "perm: " << rect.get_perimeter() << endl;
	cout << "area: " << rect.get_area() << endl;

	return 0;
}