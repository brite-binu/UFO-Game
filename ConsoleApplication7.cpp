#include <iostream>
#include <fstream>
#include <vector>
#include "ufo_functions.h"
using namespace std;

int main() 
{
	ufo_functions ufo;
	ufo.greet();
	string codeword;
	string answer = "__________";
	int misses = 0;
	vector <char> incorrect;
	bool guess = false;
	char letter;

	cout<<"Please enter your guess : ";
	cin >> letter;
	cout << endl;
	
	while (codeword != answer && misses < 7)
	{
		ufo.display_misses(misses);
		misses++;
		ufo.display_status(incorrect, answer);

	}
	//ufo.end_game();
}
