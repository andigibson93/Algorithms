#include<iostream>
#include "Rational.h"
using namespace std;
int main()
{
	Rational r1(4,8);
	cout << "The fraction of 4/8 is reduced to ";
	r1.printRational();

	cout << "The fraction of 4/8 as float is: ";
	r1.printFloat();

	Rational r2(1,3);
	cout << "Adding 1/3 to 1/2 returns:  ";
	r1.add(r2);
	r1.printRational();
	cout << "The result as a float is: ";
	r1.printFloat();

	Rational r3(4,6);
	cout<< "Subtacting 4/6 from 1/2 returns: ";
	r1.subtract(r3);
	r1.printRational();
	cout<< "The result as a float is: ";
	r1.printFloat();

	Rational r4(1,5);
	Rational r5(10,1);
	cout << "Multiplying 1/5 by 10 returns ";
	r4.multiply(r5);
	r4.printRational();
	cout<< "The result as a float is: ";
	r4.printFloat();
    
    Rational r6(2,1);
    cout << "Dividing 2/1 by 2/1 returns: ";
    r6.divide(r6); //should return 1/1
    r6.printRational();
    cout<< "The result as a float is: ";
    r6.printFloat();

	return 0;

}
