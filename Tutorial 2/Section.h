#pragma once

#include "Course.h"
#include "Student.h"

class Section
{
private:
	Course* course;
	int classCapacity;
	Student* students;
	int currentCapacity;

public:
	Section(int capacity, Course &c);

	Course getCourse() { return *course; }
	int getClassCapacity() { return classCapacity; }
	const Student* getStudents() { return students; }

	void setClassCapacity(int newCap);
	bool addStudent(Student& s);
	bool removeStudent(Student &s);


};

