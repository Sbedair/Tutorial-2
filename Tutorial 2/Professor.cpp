#include "Professor.h"

Professor::Professor(std::string spc, std::string N, std::string dept, int eid, double salary) :Faculty(N,dept,eid,salary){
	Specialization = spc;
	std::cout << "\nProfessor Constructed";
}
