#pragma once
#include <string>

#include <vector>

class Section;

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
	std::vector <Section> EnrolledCourses;
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

	bool Enroll(Section* s);
	void setName(std::string n);
	void setProgram(std::string p);



};

