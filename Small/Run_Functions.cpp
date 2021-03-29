#include <iostream>
#include <string>
#include "Header.h"


using std::cout;
using std::cin;
using std::string;


int main()
{
	string first_name;
	int a = add(3, 6);
	cout << "3 + 6 is " << a << '\n';

	double b = divide(3, 6);
	cout << "3 divided by 6 is " << b << '\n';

	int c = add(3, 6, 2);
	cout << "3 + 6 + 2 is " << c << '\n';
	
	cout << "Type your first name: \n";
	cin >> first_name;
	int len = first_name.length();
	cout << "Wellcome " << first_name << " \n";
	cout << "Your name has " << len << " characters! \n";
	



	return 0;


}