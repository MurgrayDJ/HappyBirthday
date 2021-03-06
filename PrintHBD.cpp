// Author: Murgray D. John
// Date: 10/25/18
// Purpose: To print the Happy Birthday song!
// I wrote this just to practice more with functions and loops.
// To expand on it I would include more validation.

// Inspiration: The C++ Learning Path on Lynda.com

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

void PrintHBD();
string yourName;
void getName(string&);
int yourAge;
void singAge(int&);

int main()
{
	getName(yourName);
	PrintHBD();
	singAge(yourAge);
	return 0;
}

void getName(string& aName)
{
	cout << "Hello I heard that it's your birthday!\n";
	cout << "What is your name? ";
	cin >> aName;
}


void PrintHBD() 
{
	for (int i = 0; i < 4; i++)
	{
		if (i != 2)
		{
			cout << "Happy Birthday to you.\n";
		}
		else
		{
			cout << "Happy Birthday Deeeear " << yourName << "!\n";
		}
	}
}

void singAge(int&)
{
	cout << "So how old are you? ";
	cin >> yourAge;
	for (int i = 1; i <= yourAge; i++)
	{
		cout << "Are you " << i << "?\n";
	}
	
	cout << "Yayyy! You're " << yourAge << "! Happy Birthday " << yourName << ", may all your wishes come true.\n";
}
