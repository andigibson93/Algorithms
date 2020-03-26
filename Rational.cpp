#include<iostream>
#include "Rational.h"
using namespace std;

Rational::Rational()
{
    numerator = 0;
    denominator = 1;
}

Rational::Rational(int n, int d)
{
    numerator = n;
    denominator = d;

    if(d == 0)
        cout << "Undefined" <<endl;
    else
        reduce();
}

void Rational::setNumerator (int n)
{
    numerator = n;
}

int Rational::getNumerator()
{
    return numerator;
}

void Rational::setDenominator(int d)
{
    denominator = d;
}

int Rational::getDenominator()
{
    return denominator;
}

void Rational::add(Rational other)
{
    // a/b + c/d == (a*d + c*b)/ b*d
    numerator = numerator * other.getDenominator() + other.getNumerator() * denominator;
    denominator *= other.getDenominator();
    reduce();
}

void Rational::subtract(Rational other)
{
    //a/b - c/d == a/b + (-c/d)
    Rational negated(other.getNumerator() * -1, other.getDenominator());
    add(negated);
}

void Rational::multiply(Rational other)
{
    numerator *= other.getNumerator();
    denominator *= other.getDenominator();
    reduce();
}

void Rational::divide(Rational other)
{
    //(a/b)/(c/d) == (a/b)*(d/c)
    Rational inverted(other.getDenominator(), other.getNumerator());
    multiply(inverted);
}

int Rational::gcd(int a, int b)
{
    if (b == 0) 
        return a; 
    return gcd(b, a % b);
}

void Rational::reduce()
{
    int divider = gcd(numerator, denominator);
    numerator /= divider;
    denominator /= divider;
}

void Rational::printRational()
{
    cout << numerator << "/" << denominator <<endl;
}

void Rational::printFloat()
{
    cout << numerator / static_cast <float> (denominator) <<endl;
}
