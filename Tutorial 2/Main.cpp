#include <iostream>
#include "Student.h"
#include "Course.h"
#include "Faculty.h"
#include "Professor.h"
#include "Admin.h"
#include "Section.h"

using namespace std;

int main() {
	Student s1("bob", "COEN");
	Course c1("Programming 2", "COEN244", 3);
	Course c2("Programming 1", "COEN243", 2.5);
	Section Sec1(5, c1);
	Section Sec2(10, c2);

	cout << "\n\n" << Sec1;
	Sec1 += 8;
	cout << "\n" << Sec1;
	Sec1 += Sec2;
	cout << "\n" << Sec1;
	cout << "\n" << Sec2 << "\n\n";
	//cout << "S1 ID: " << s1.getID() << " S1 Name: " << s1.getName() << endl;
	//cout << "CID1: " << c1.getID() << endl;
	//cout << Sec1.getClassCapacity() << endl;

	//cout << Sec1.addStudent(s1);

	//cout << "\n\nStudent is enrolled in " << Sec1.getStudents(0).getCreditsEnrolled() << " Credits";

	//Faculty *F1 = new Admin("EV","Bob","COEN",1,10);
	//Faculty *P1 = new Professor("RF","Alice", "ELEC", 2, 10);
	//Admin A1("Hall", "Charlie", "Mech", 3, 10);

	//cout << endl << F1->getName() << " earns " << F1->getSalary() << " Dollas\n";
	//cout << endl << P1->getName();
	//cout << " earns " << P1->getSalary() << " Dollas\n";
}