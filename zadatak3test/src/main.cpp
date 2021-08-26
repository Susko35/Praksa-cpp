using namespace std;
#include "Student.h"
#include "Professor.h"

int main(){
    string name;
    cout << "Enter student's name: ";
    cin >> name;
    Student student(name);
    cout << "Enter professor's name: ";
    cin >> name;
    Professor professor(name);
    cout << "\n";
    professor.print(professor);
    student.print(student);
    return 0;
}
