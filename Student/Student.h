#pragma once

#include "Marks.h"
#include <string>

class Student {
private:
	std::string name;
	Marks objM;

public:
	
	Student();
	void readStudent();
	void printStudent();
};