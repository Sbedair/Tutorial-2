#include "Admin.h"

Admin::Admin(std::string L, std::string N, std::string dept, int eid, double salary): Faculty(N ,dept ,eid ,salary) {
	Location = L;
	std::cout << "Admin Created";
}