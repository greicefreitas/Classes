#include <iostream> // This library includes cin and cout, to read monitor and print
using std::cout;
using std::cin;
// from standard library, I'm using cout
//It prevents to write std::cout in fronto of every print.

int main()
{
	float divisao = 0;
	int soma = 0;
	auto x = 100; //Here the compiler can decide about the type
	float quociente = 1.0;
	// Printing lines in sequence!
	// << send data to stream
	cout << "Hello" << '\n' <<  "World! "  << x << "% \n"; 
	soma = 2 + 2;
	cout << "The sum 2 + 2 is:" << '\n' << soma  << '\n';
	cout << "Type a number:\n";
	cin >> quociente;
	if (quociente != 0)
	{
		divisao = soma / quociente; // the .0 is to change the result from int to float
		cout << "The result of the sum divided by " << quociente << " is: \n" << divisao << '\n';
	}
	else 
	{
		cout << "Invalid input \n";
		
	}

	cout << "Now, let's count to 10! \n";
	for (int loop = 0; loop <= 10; loop++)
	{
		cout << loop << "	";
	}
	cout << '\n';

	int random_number = 0;
	cout << "Guess a number betwwen 0 and 10: \n";
	while (random_number != 7)
	{
		cin >> random_number;
		cout << "Wrong number, try again: \n";
	}

	cout << "Yes, that's right! \nThe number is " << random_number << '\n' ;



	cout << "EXIT";


}