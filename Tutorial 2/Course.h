#pragma once
#include <iostream>

class Course
{
private:
	std::string name;
	std::string CNumber;
	int ID;
	double credits;

public:
	Course(std::string n = "", std::string cn = "", double creds = 0);
	//Getters
	std::string getName() { return name; }
	std::string getCNumber() { return CNumber; }
	int getID() { return ID; }
	double getCredits() { return credits; }
	//Setters
	void setName(std::string n) { name = n; }
	void setCNumber(std::string cn) { CNumber = cn; }
	void setCredits(const double creds) { credits = creds; }
};

