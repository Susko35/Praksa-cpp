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
  sudentName = name;
}
       

ostream& operator<<(ostream& os, Student& student)
{
  os << "Student's name: " << student.getName() << "\n";
  return os;
}

