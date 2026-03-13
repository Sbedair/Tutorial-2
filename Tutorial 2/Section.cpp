#include "Section.h"
#include <array>

Section::Section(int capacity, Course &c) {
	classCapacity = capacity;
	course = &c;
	students = new Student[classCapacity];
	currentCapacity = 0;
	Prof = new Professor();
}

void Section::setClassCapacity(int newCap) { 
	if (classCapacity <= newCap) {
		
		Student *temp = new Student[newCap];
		for (int i = 0; i < classCapacity; i++) {
			temp[i] = students[i];
		}
		delete[] students;
		students = temp;
		classCapacity = newCap;
	}
	else {
		std::cout << "delete some students first lol";
	}
}

bool Section::addStudent(Student &s) {
	if (currentCapacity < classCapacity)
	{
		if (s.Enroll(this)) {
			students[currentCapacity] = s;
			currentCapacity++;
			return true;
		}
	}
		return false;
}


bool Section::removeStudent(Student& s) {
	for (int i = 0; i < classCapacity; i++) {
		if (students[i].getID() == s.getID()) {
			for (int j = i; j < currentCapacity; j++) {
				students[j] = students[++j];
			}
			--currentCapacity;
			return true;
		}
	}

	return false;
}