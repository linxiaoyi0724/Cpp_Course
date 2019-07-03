#include "stdafx.h"


/*
#include <iostream>
using namespace std;
void sample();
int main()
{
	cout << "main() will call the sample() function:" << endl;
	sample();
	return 0;
}

void sample()
{
	cout << "I'm but a simple function." << endl;
}
*/




/*
#include <iostream>
using namespace std;
void cheers(int);
double cube(double);
int main()
{
	cheers(5);
	cout << "Give me a number: ";
	double n;
	cin >> n;
	double num = cube(n);
	cout << "A " << n << "-foot cube has a volume of " << num << "cubic feet." << endl;
	cheers(cube(2));
	return 0;
}

void cheers(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Cheers! ";
	}
	cout << endl;
}

double cube(double num)
{
	return num * num * num;
}
*/









/*
#include <iostream>
using namespace std;
void nChar(char, int);
int main()
{
	cout << "Enter a character: ";
	char ch;
	int times;
	cin >> ch;
	while (ch!='q')
	{
		cout << "Enter a integer: ";
		cin >> times;
		nChar(ch, times);
		cout << "Enter another character or press q key to quit: ";
		cin >> ch;
	}
	cout << "The value of times is " << times << endl;
	cout << "Bye!" << endl;
	return 0;
}
void nChar(char ch, int n)
{
	while (n-->0)
	{
		cout << ch;
	}
	cout << endl;
}
*/