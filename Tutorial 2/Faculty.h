#pragma once
#include <string>
#include <iostream>

class Faculty
{
private:
	std::string name;
	std::string department;
	int EID;

protected:
	double Salary;

public:
	Faculty(std::string N, std::string dept, int eid, double salary) {
		name = N;
		department = dept;
		EID = eid;
		Salary = salary;
		std::cout << "\nFaculty Member Constructed";
	}
	~Faculty() {
		std::cout << "\nFaculty Member Destructed";
	}
	//getters
	void setName(const std::string& n) { name = n; }
	void setDepartment(const std::string& d) { department = d; }
	void setEID(int id) { EID = id; }
	void setSalary(double s) { Salary = s; }

	// Getters
	std::string getName() const { return name; }
	std::string getDepartment() const { return department; }
	int getEID() const { return EID; }
	//virtual double getSalary() const { return Salary; }
	virtual double getSalary() const = 0;

};