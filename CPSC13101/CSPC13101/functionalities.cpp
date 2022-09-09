#include "vector.h"
#include <iostream>
using namespace std;
#include "vector.cpp"

int main()
{
	vector131<int> v;
	vector131<int> v1;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v1.push_front(71);
	v1.push_front(72);
	v1.push_front(73);
	v1.push_front(74);
	v.print();
	v1.print();


	v.resize(3);
	v.print();
	cout << v.size() << endl;
	v.resize(6);
	v.print();
	cout << v.size() << endl;

	v1.resize(3, 23);
	v1.print();
	cout << v1.size() << endl;
	v1.resize(6, 23);
	v1.print();
	cout << v1.size() << endl;
	return 0;
}

