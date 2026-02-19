#pragma once
#include <string>

class Student
{
private:
	int id;
	std::string name;
	std::string program;
	double GPA;
	double tuition;
	double creditsEnrolled;
	double creditsCompleted;
public:
	
	Student(std::string n = "", std::string p = "");
	Student(const Student&);
	~Student();

	std::string getName();
	int getID();
	std::string getProgram();
	double getGPA();
	double getTuition();
	double getCreditsEnrolled();
	double getCreditsCompleted();

	void setName(std::string n);
	void setProgram(std::string p);



};

