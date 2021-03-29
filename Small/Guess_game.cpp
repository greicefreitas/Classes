#include <iostream> // This library includes cin and cout, to read monitor and print
using std::cout;
using std::cin;

int main() {
	int answer = 50;
	int guess = 0;
	bool notguessed = true;
	cout << "Guess a number between 0 and 100! \n"; 
	
	while (notguessed) {
		cout << "Type your guess \n";
		cin >> guess;
		if (guess > answer)
		{
			cout << "Your guess is high! Try again! \n";
		}
		if (guess < answer)
		{
			cout << "Your guess is low! Try again! \n ";
		}
		if (guess == answer)
		{
			notguessed = false;
		}
	}

	cout << "Good job! You found the number!!";
}
