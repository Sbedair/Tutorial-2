#include "Course.h"

static int idCounter = 0;

Course::Course(std::string n, std::string cn, double creds) {
	name = n;
	CNumber = cn;
	credits = creds;
	ID = ++idCounter;
}