#pragma once
#include "Faculty.h"
#include <string>
#include <iostream>

class Professor :public Faculty
{
private:
	std::string Specialization;


public:
	Professor(std::string spc = "", std::string N = "", std::string dept = "", int eid = 0, double salary = 0);
	~Professor() {
		std::cout << "\nProfessor Destructed";
	}
	std::string getSpecialization() { return Specialization; }
	virtual double getSalary() const { return Salary*1.2; }

};

