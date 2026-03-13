#pragma once

#include "Course.h"
#include "Student.h"
#include "Professor.h"

class Section
{
private:
	Course* course;
	Student* students;
	Professor* Prof;
	int currentCapacity;
	int classCapacity;

public:
	Section(int capacity, Course &c);

	Course getCourse() { return *course; }
	int getClassCapacity() { return classCapacity; }
	Student getStudents(int index) { return students[index]; }

	void setClassCapacity(int newCap);
	bool addStudent(Student& s);
	bool removeStudent(Student &s);

	void operator+=(int x) { classCapacity = classCapacity + x; }
	void operator+=(Section& s) {
		classCapacity = classCapacity + s.classCapacity;
		currentCapacity = currentCapacity + s.currentCapacity;
	}
	bool operator<(Section& s) {//Section1 < Section2
		if (classCapacity < s.classCapacity) {
			return true;
		}
		else {
			return false;
		}
	}
	
	friend std::ostream& operator<<(std::ostream& os,Section &s2) {
		os << " Capacity: " << s2.classCapacity << " Current Capacity: " << s2.currentCapacity;
		return os;
	}
	//cout << Section1
	
	friend std::istream& operator>>(std::istream& is, Section& s2) {
		is >> s2.classCapacity;
		return is;
	}
	//cin >> Section1
};

