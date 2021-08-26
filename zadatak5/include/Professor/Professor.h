#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream>
#include <cstring>


class Professor {
    private:
        string professorName;
    public:
        string getName();
        Professor();
        ~Professor();
        Professor(string name);
};

#endif
