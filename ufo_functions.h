#pragma once
#include <vector>
#include <iostream>
using namespace std;

class ufo_functions
{
public:
	void display_misses(int misses);
	void greet();
	void end_game(string answer, string codeword);
	void display_status(vector <char> incorrect, string answer);

};

