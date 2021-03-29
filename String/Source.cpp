#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
	string two_words;
	string w1;
	string w2;

	cout << "Enter two words separated by \" , \" : \n";
	//cin >> two_words; //it's a stream, it will read until the space!
	getline(cin, two_words);

	int pos = two_words.find(",");
	w1 = two_words.substr(0, pos);
	w2 = two_words.substr(pos + 1, two_words.length());

	cout << "First word you typed: \n" << w1  << '\n';
	cout << "Second word you typed: \n" << w2 << '\n';

	if (w1.length() > w2.length())
	{
		cout << "First word \" " << w1 << "\" is longer than the second word. \n";
	}
	if (w2.length() > w1.length())
	{
		cout << "Second word \" " << w2 << "\" is longer than the second word. \n";
	}
	if(w2.length() == w1.length())
	{
		cout << "The words have the same size! \n";
	}

	return 0;
}





