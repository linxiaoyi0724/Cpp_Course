#include "stdafx.h"







/*
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}
	cout << spaces << " spaces," << total << " characters total in sentence\n";
	return 0;
}
*/






/*
#include <iostream>
using namespace std;
int main()
{
	cout << "Type, and I shall repeat." << endl;
	char ch;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
		{
			cout << ch;
		}
		else
		{
			cout << ++ch;
		}
		cin.get(ch);
	}
	cout << "Please excuse the slight confusion" << endl;
	return 0;
}
*/





/*
#include <iostream>
using namespace std;
const int Fave = 27;
int main()
{
	cout << "Enter a number in the range 1-100 to find my favorite number: ";
	int number;
	do {
		cin >> number;
		if (number > Fave)
		{
			cout << "Too high -- guess again: ";
		}
		else if (number < Fave)
		{
			cout << "Too low -- guess again: ";
		}
		else
		{
			cout << number << " is right !" <<endl;
		}
	} while (number != Fave);
	return 0;
}
*/







/*
#include <iostream>
using namespace std;
int main()
{
	cout << "This program may reformat your hard disk and destroy all your data." << endl;
	cout << "Do you wish to continue ? <y/n>";
	char ch;
	cin >> ch;
	if (ch == 'Y' || ch == 'y')
	{
		cout << "You were warned! \a\a\n";
	}
	else if (ch == 'N' || ch == 'n')
	{
		cout << "A wish choice ... bye \n";
	}
	else
	{
		cout << "That wasn't a y or an n, so I guess I'll trash your disk anyway.\a\a\a\n";
	}
	return 0;
}
*/










/*
#include <iostream>
using namespace std;
const int ArSize = 6;
int main()
{
	cout << "Enter the NAAQs (New Age Awareness Quotients) of  your neighbors. Progarm terminates when you make " << ArSize << " entries or enter a negative value" << endl;
	int i = 0;
	float number[ArSize];
	cout << "First value: ";
	float temp;
	cin >> temp;
	while (i < ArSize && temp >= 0)
	{
		number[i] = temp;
		i++;
		if (i < ArSize)
		{
			cout << "Next value: ";
			cin >> temp;
		}
	}
	if (i == 0)
	{
		cout << "No data -- bye \n";
	}
	else
	{
		cout << "Enter your NAAQ : ";
		cin >> temp;
		int count = 0;
		for (int j = 0; j < i; j++)
		{
			if (number[j] > temp)
			{
				count++;
			}
		}
		cout << count << " of your neighbors have greater awareness of the New Age than you do. " << endl;
	}
	return 0;
}
*/