#include <iostream>
#include <cstring>

#include "Professor/Professor.h"
//#include "Professor.h"

using namespace std;

string Professor::getName()
{
  return professorName;
}

Professor::Professor(){}

Professor::~Professor(){}

Professor::Professor(string name)
{
  professorName = name;
}

ostream& operator<<(ostream& os, Professor& professor)
{
  os << "Professor's name: " << professor.getName() << "\n";
  return os;
}

