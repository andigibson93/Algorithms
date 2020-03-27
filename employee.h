/* Create a class called Employee that includes three pieces of information as data members - a first
name(type string), a last name(type string) and monthly salary(type int). Your class should have a 
constructor that initalizes the three data memebers. Provide a set function and get function for
each data member. If the monthly salary is not positive, set it to 0. Write a test program
that demonstrates class Employee's capablilties. Create two Employee objects and display each 
object yearly salary. Then give each Employee a 10 percent raise and display each Employee's 
salary again.*/

#include <string>
using namespace std;

class Employee
{
public:
	Employee(string, string, int); //constructor to initalize the three data members

	void set_first_name(string);
	string get_first_name ();

	void set_last_name (string);
	string get_last_name ();

	void set_monthly_salary(int);
	int get_monthly_salary ();

private:
	string first_name;
	string last_name;
	int monthly_salary;


};