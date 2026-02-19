#include <iostream>
#include "Student.h"
#include "Course.h"
#include "Faculty.h"
#include "Professor.h"
#include "Admin.h"


using namespace std;

int main() {
	//Student s1("bob", "COEN");
	//Student s2(s1);
	//Course c1("Programming 1", "COEN243", 3.5);
	//Course c2("Programming 2", "COEN244", 3);
	////int x = 8;

	////cout << "Student Name: " << s1.getName() << "\nStudent ID: " << s1.getID() 
	////	<< "\nProgram: " << s1.getProgram();
	//cout << "S1 ID: " << s1.getID() << " S1 Name: " << s1.getName() << endl;
	//cout << "S2 ID: " << s2.getID() << " S2 Name: " << s2.getName() << endl;

	//cout << "CID1: " << c1.getID() << endl;
	//cout << "CID2: " << c2.getID() << endl;

	Faculty *F1 = new Admin("EV","Bob","COEN",1,10);
	Faculty *P1 = new Professor("RF","Alice", "ELEC", 2, 10);
	Admin A1("Hall", "Charlie", "Mech", 3, 10);

	cout << endl << F1->getName() << " earns " << F1->getSalary() << " Dollas\n";
	cout << endl << P1->getName();
	cout << " earns " << P1->getSalary() << " Dollas\n";
}