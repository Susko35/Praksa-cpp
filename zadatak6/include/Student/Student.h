#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>

class Student
{
  private:
    string studentName;
  public:
    string getName();
    Student();
    ~Student();
    Student(string name);
    friend ostream& operator<<(ostream& os, Student& student);
};

#endif
