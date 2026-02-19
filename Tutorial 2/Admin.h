#pragma once
#include "Faculty.h"
#include <iostream>

class Admin: public Faculty
{
private:
	std::string Location;

public:
	Admin(std::string L, std::string N, std::string dept, int eid, double salary);
	~Admin() {
		std::cout << "\nAdmin Destroyed";
	}
	virtual double getSalary() const { return Salary * 1.1; }
};

