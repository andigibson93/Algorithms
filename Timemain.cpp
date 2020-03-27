#include<iostream>
#include "Time.h"
using namespace std;

int main()
{
	Time t;

	cout<< "The initial unoversal time is ";
	t.printUniversal();
	cout<< "\nThe initial statndard time is ";
	t.printStandard();

	t.setTime(14, 27, 6);

	cout<< "\n\nUniversal time after setTime is ";
	t.printUniversal();
	cout<< "\nStandard time after setTime is ";
	t.printStandard();

	return 0;
}