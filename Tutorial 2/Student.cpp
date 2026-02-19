#include "Student.h"
#include <iostream>

static int ID = 0;

Student::Student(std::string n, std::string p) {
	name = n;
	ID++;
	id = ID;
	program = p;
	GPA = 0;
	tuition = 20000;
	creditsEnrolled = 0;
	creditsCompleted = 0;
}

Student::Student(const Student& n) {
	ID++;
	id = ID;
	name = n.name;
	program = n.program;
	GPA = n.GPA;
	tuition = n.tuition;
	creditsEnrolled = n.creditsEnrolled;
	creditsCompleted = n.creditsCompleted;
}


Student::~Student() {
	std::cout << "\nDestructor called for Student: " << name << "\n";
}

int Student::getID() { return id + 40000000; }

std::string Student::getName() { return name; }

std::string Student::getProgram() {
	return program;
}

double Student::getGPA() {
	return GPA;
}

double Student::getTuition() {
	return tuition;
}

double Student::getCreditsEnrolled() {
	return creditsEnrolled;
}

double Student::getCreditsCompleted() {
	return creditsCompleted;
}

void Student::setName(std::string n) {
	name = n;
}

void Student::setProgram(std::string p) {
	program = p;
}
