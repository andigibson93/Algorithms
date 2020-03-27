#include<iostream>
#include "Count.h"
using namespace std;

Count::Count()
{

}

void setX(Count &c, int val)
{
	c.x = val;
}

void Count::print() const
{
	cout<< x << endl;
}