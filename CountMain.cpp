#include<iostream>
#include "Count.h"
using namespace std;

int main()
{
	Count counter;

	cout<< "counter.x.after instantiation: ";
	counter.print();

	setX(counter, 8);

	cout << "counter.x after call to setX friend function: ";
	counter.print();

}