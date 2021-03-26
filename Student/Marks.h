#pragma once
//We have a class named Marks that contains two data members rno - to store roll number and perc - 
//to store the percentage of the student.We have another class named Students that contains two 
// members name - to store the name of the student and objM - which is an object of Marks class.
//
//In Students class there are two member functions :
//
//readStudent() - To read the name of the student, and Here, we called readMarks() member function of 
// Marks class by using objM - it will read roll number and percentage.
// 
//printStudent() - To print the name of the student, and Here, we called printMarks() member function of 
// Marks class by using objM - it will print roll number and percentage.


class Marks {
private:
	int rno;
	float perc;
public: 
	Marks();
	void readMarks();
	void printMarks();
};
