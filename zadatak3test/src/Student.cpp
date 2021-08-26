using namespace std;
#include "Student.h"

string Student::getName()
{
	return studentName;
}

Student::Student(){}

Student::~Student(){}

Student::Student(string name)
{
	studentName = name;
}
       
void Student::print(Student& student)
{
	cout << student.getName();
}

