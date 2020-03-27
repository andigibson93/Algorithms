#include<iostream>
using namespace std;

class Date
{

public:
	Date(int, int, int);

	void set_month(int);
	int get_month();

	void set_day(int);
	int get_day();

	void set_year(int);
	int get_year();

	void displayDate ();

private:
	int month;
	int day;
	int year; 

};


Date::Date (int m, int d, int y)
{
	set_month(m);
	day = d;
	year = y;

}

void Date::set_month(int m)
{

	// if (!(m <=0 || m >= 13))
	// if (!(m <1 || m > 12))
	// if (m >0 && m <13)
	if (m >=1 && m <=12)
		month = m;
	else 
		month = 1;
}

int Date::get_month()
{
		return month; 
}

void Date::set_day(int d)
{
	day = d;
}

int Date::get_day()
{
	return day;
}

void Date::set_year(int y)
{
	year = y;
}

int Date::get_year ()
{
	return year;
}

void Date::displayDate ()
{
	cout << month << "/" << day << "/" << year <<endl;
}


int main()
{
	Date myDate(06,25,1982);
	myDate.displayDate();

	myDate.set_month(-5);
	myDate.set_day(111);
	myDate.set_year(31);

	myDate.displayDate();
}
