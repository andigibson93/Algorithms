#include<iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(int l, int w)
{
	Length = l;
	Width = w;
}

void Rectangle::setLength(int l)
{
	Length = l;
}

int Rectangle::getLength()
{
	return Length;
}

void Rectangle::setWidth(int w)
{
	Width = w;
}

int Rectangle::getWidth()
{
	return Width;
}

int Rectangle::volume()
{
	return (Length * Width);
}


