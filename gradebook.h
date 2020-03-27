#include<string>
using namespace std;

class GradeBook
{
public:
	GradeBook (string name);
	void setCoursename(string name);
	string getCourseName();
	void displayMessage();

private:
	string courseName;

};