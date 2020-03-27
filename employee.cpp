/* Create a class called Employee that includes three pieces of information as data members - a first
name(type string), a last name(type string) and monthly salary(type int). Your class should have a 
constructor that initalizes the three data memebers. Provide a set function and get function for
each data member. If the monthly salary is not positive, set it to 0. Write a test program
that demonstrates class Employee's capablilties */

#include<iostream>
#include "employee.h"
using namespace std;

Employee::Employee (string first, string last, int sal){

	first_name = first;
	last_name = last;
	monthly_salary = sal;
}

	void Employee::set_first_name(string first){
		first_name = first;
}

	string Employee::get_first_name (){
		return first_name;
	}

	void Employee::set_last_name (string last){
		last_name = last;
	}

	string Employee::get_last_name (){
		return last_name;

	}
	
	void Employee::set_monthly_salary(int sal){
		if ( sal >= 1)
			monthly_salary = sal;

		else
			monthly_salary = 0;

	}
	int Employee::get_monthly_salary (){
		return monthly_salary;

	}








