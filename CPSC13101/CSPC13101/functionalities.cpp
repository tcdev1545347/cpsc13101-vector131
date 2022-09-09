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

	//vector v functionality
	cout << "Below are the starting " << v.size() << " values of the array v:" << endl;
	v.print();

	cout << "Array of v is being resized to 10:" << endl;
	v.resize(10);
	v.print();

	cout << "Array of v is being resized to 6:" << endl;
	v.resize(6);
	v.print();

	//vector v1 functionality
	cout << "Below are the starting " << v1.size() << " values of array v1:" << endl;
	v1.print();

	cout << "Array of v1 is being resized to 5:" << endl;
	v1.resize(5);
	v1.print();

	cout << "Array of v1 is being resized to 3 with the value of 23:" << endl;
	v1.resize(3, 23);
	v1.print();

	cout << "Array of v1 is being resized to 8 with the value of 12:" << endl;
	v1.resize(8, 12);
	v1.print();

	return 0;
}
