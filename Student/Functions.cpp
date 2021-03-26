#include "Student.h"
#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::getline;
using std::endl;


//Contructors: 
Marks::Marks(): rno(0), perc(0.0) 
{
}

Student::Student(): name("")
{
	Marks objM;
}

//Functions:

void Student::readStudent() {
	cout << "Name of the student \n";
	getline(cin, name);
	objM.readMarks();
}

void Student::printStudent() {
	cout << "Name: " << name << endl;
	objM.printMarks();
}


void Marks::readMarks() {
	cout << "Enter roll number: ";
	cin >> rno;
	cout << "Enter percentage: ";
	cin >> perc;
}

void Marks::printMarks() {
	cout << "Roll No.: " << rno << endl;
	cout << "Percentage: " << perc << "%" << endl;
}
