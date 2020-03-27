/*Create two Employee objects and display each 
object yearly salary. Then give each Employee a 10 percent raise and display each Employee's 
salary again. */

#include<iostream>
#include "employee.h"
using namespace std;

int main()
{
	Employee myEmp1 ("Martin", "Schaef", 500000);
	Employee myEmp2 ("Andi", "Gibson", 1000000);

	cout << "Employee1 salary is: " << myEmp1.get_monthly_salary() <<endl;
	cout<< "Employee2 salary is: " << myEmp2.get_monthly_salary() << "\n\n";


	myEmp1.set_monthly_salary(myEmp1.get_monthly_salary() * 1.1);
	myEmp2.set_monthly_salary(myEmp2.get_monthly_salary() * 1.1);

	cout << "Employee1 new salary is: " << myEmp1.get_monthly_salary() <<endl;
	cout<< "Employee2 new salary is: " << myEmp2.get_monthly_salary() <<endl;

	return 0;

}
