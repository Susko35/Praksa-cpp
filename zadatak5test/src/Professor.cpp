using namespace std;
#include "Professor.h"

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

void Professor::print()
{
	cout << professorName << "\n";
}

