#include <iostream>
#include "Student.h"


int main() {

	//create object to student class
	Student std;
	
	std::cout << "Student created! \n";
	std.printStudent();

	std::cout << "Now including: \n";

	std.readStudent();

	std.printStudent();


	return 0;
}