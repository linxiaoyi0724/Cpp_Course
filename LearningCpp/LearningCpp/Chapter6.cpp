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











/*
#include <iostream>
using namespace std;
const char* qualify[4] =
{
	"10, 000-meter race.\n",
	"mud tug-of-war. \n",
	"masters canoe jousting.\n",
	"pie-throwing festival.\n"
};

int main()
{
	int age;
	cout << "please input your age:";
	cin >> age;
	int index;
	if (age > 17 && age <= 35)
	{
		index = 0;
	}
	else if (age > 35 && age <= 50)
	{
		index = 1;
	}
	else if (age > 50 && age < 65)
	{
		index = 2;
	}
	else
	{
		index = 3;
	}
	cout << "Your qualtify is " << qualify[index] << endl;
	return 0;
}
*/









/*
#include <iostream>
using namespace std;
bool is_int(double n);
int main()
{
	double num;
	cout << "Yo, dude! Enter an integer value: ";
	cin >> num;
	while (!is_int(num))
	{
		cout << "Out of range -- please try again: ";
		cin >> num;
	}
	int value = int(num);
	cout << "You've entered the integer " << value << endl;
	return 0;
}

bool is_int(double n)
{
	if (n >= INT_MIN && n <= INT_MAX)
	{
		return true;
	}
	else
	{
		return false;
	}
}
*/










/*
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	cout << "Enter text for analysis, and type @ to terminate input." << endl;
	char ch;
	int chNum = 0;
	int spaceNum = 0;
	int digisNum = 0;
	int punctNum = 0;
	int otherNum = 0;
	cin.get(ch);
	while (ch != '@')
	{
		if (isalpha(ch))
		{
			chNum++;
		}
		else if (isspace(ch))
		{
			spaceNum++;
		}
		else if (isdigit(ch))
		{
			digisNum++;
		}
		else if (ispunct(ch))
		{
			punctNum++;
		}
		else
		{
			otherNum++;
		}
		cin.get(ch);
	}
	cout << chNum << " letters, " << spaceNum << " whitespace, " << digisNum << " digits, " << punctNum << " punctuations, " << otherNum << " others." << endl;
	return 0;
}
*/










/*
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter two numbers: ";
	int a, b;
	cin >> a >> b;
	int c = a > b ? a : b;
	cout << "The larger of " << a << " and " << b << " is " << c << endl;
	return 0;
}
*/















/*
#include <iostream>
using namespace std;
void showMenu();
void report();
void comfort();
void alibi();
int main()
{
	int option;
	showMenu();
	cin >> option;
	while (option != 5)
	{
		switch (option)
		{
		case 1:
			cout << "\a\n";
			break;
		case 2:
			report();
			break;
		case 3:
			alibi();
			break;
		case 4:
			comfort();
			break;
		default:
			cout << "That's not a choice." << endl;
			break;
		}
		showMenu();
		cin >> option;
	}
	cout << "Bye!" << endl;
	return 0;
}

void showMenu()
{
	cout << "Please enter 1, 2, 3, 4, or 5: " << endl;
	cout << "1) alarm           2) report" << endl;
	cout << "3) alibi           4) comfort" << endl;
	cout << "5) quit" << endl;
}

void report()
{
	cout << "It' been an excellent week for business." << endl;
	cout << "Sales are up 120%. Expenses are down 35%." << endl;
}

void alibi()
{
	cout << "The boss was in all day." << endl;
}

void comfort()
{
	cout << "Your employees think you are the finest CEO" << endl;
	cout << "in the industry. The board of directors think" << endl;
	cout << "you are the finest CEO in the indystry." << endl;
}
*/









/*
#include <iostream>
using namespace std;
int main()
{
	enum { red , orange, yellow, green, blue, violet, indigo };
	int code;
	cout << "Enter color code (0-6): ";
	cin >> code;
	while (code >= red && code <= indigo)
	{
		switch (code)
		{
		case red:
			cout << "Her lips were red." << endl;
			break;
		case orange:
			cout << "Her hair was orange." << endl;
			break;
		case yellow:
			cout << "Her shoes were yellow." << endl;
			break;
		case green:
			cout << "Her nails were green." << endl;
			break;
		case blue:
			cout << "Her nails were green." << endl;
			break;
		case violet:
			cout << "Her eyes were violet." << endl;
			break;
		case indigo:
			cout << "Her mood was indigo." << endl;
			break;
		}
		cout << "Enter color code (0-6):";
		cin >> code;
	}
	cout << "Bye" << endl;
	return 0;
}
*/







/*
#include <iostream>
using namespace std;
const int ArSize = 80;
int main()
{
	char ch[ArSize];
	int space = 0;
	cout << "Enter a line of text:" << endl;
	cin.get(ch, ArSize);
	cout << "Complete line: " << endl << ch << endl;
	cout << "Line through first period:" << endl;
	for (int i = 0; ch[i] != '\0'; i++)
	{
		cout << ch[i];
		if (ch[i] == '.')
			break;
		if (ch[i] != ' ')
			continue;
		space++;
	}
	cout << endl << space << " spaces" << endl;
	cout << "Done." << endl;
	return 0;
}
*/










/*
#include <iostream>
using namespace std;
const int MaxNum = 5;
int main()
{
	cout << "Please enter the weights of your fish." << endl;
	cout << "You may enter up to " << MaxNum << " fish <q to terminate>." << endl;
	double fish[MaxNum];
	int i = 0;
	cout << "fish #1: ";
	while (i <MaxNum && cin >> fish[i])
	{
		if (++i < MaxNum)
		{
			cout << "fish #" << i << ": ";
		}
	}

	double total = 0;
	for (int j = 0; j < i; j++)
	{
		total += fish[j];
	}

	if (i == 0)
	{
		cout << "No fish. " << endl;
	}
	else
	{
		double average = total / i;
		cout << average << " = avergae weight of " << i << " fish " << endl;
	}
	cout << "Done." << endl;
	return 0;
}
*/











/*
#include <iostream>
using namespace std;
const int MaxNum = 5;
int main()
{
	double scores[MaxNum];
	cout << "Please enter your golf scores." << endl;
	cout << "You must enter " << MaxNum << " rounds." << endl;
	for (int i = 0; i < MaxNum; i++)
	{
		cout << "round #" << i << ": ";
		while (!(cin>>scores[i]))
		{
			cin.clear();
			while (cin.get()!= '\n')
			{
				continue;
			}
			cout << "Please enter a number: ";
		}
	}
	double total = 0;
	for (int j = 0; j < MaxNum; j++)
	{
		total += scores[j];
	}
	double average = total / MaxNum;
	cout << average << " = average score " << MaxNum << " rounds." << endl;
	return 0;
}
*/





/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int year;
	char autoMobile[98];
	double aPrice;
	double dPrice;

	cout << "Enter the make and model of automobile: ";
	cin.get(autoMobile, 98);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original asking price: ";
	cin >> aPrice;
	dPrice = 1.93 * aPrice;

	cout.precision(2);
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Make and model: " << autoMobile << endl;x
	cout << "Year: " << year << endl;
	cout << "Was asking $" << aPrice << endl;
	cout << "Now asking $" << dPrice << endl;

	ofstream outFile;
	outFile.open("xiaoyi.txt");
	outFile.setf(ios_base::fixed, ios_base::floatfield);
	outFile.precision(2);
	outFile << "Make and model: " << autoMobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking $" << aPrice << endl;
	outFile  << "Now asking $" << dPrice << endl;
	outFile.close();
	return 0;
}
*/








#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 80;
using namespace std;
int main()
{
	char fileName[SIZE];
	cout << "Enter name of data file: ";
	cin.get(fileName, SIZE);

	fstream fileIn;
	fileIn.open(fileName);
	if (!fileIn.is_open())
	{
		cout << "Can't open the file." << endl;
		cout << "terminate do'nt run." << endl;
		exit(EXIT_FAILURE);
	}

	double value;
	double count = 0;
	double total = 0;

	do {
		fileIn >> value;
		count++;
		total += value;
	} while (fileIn.good());

	if (fileIn.eof())
	{
		cout << "File reach to end." << endl;
	}
	else if (fileIn.fail())
	{
		cout << "Read data do't mismatch." << endl;
	}
	else
	{
		cout << "Process is fail." << endl;
	}

	if (count == 0)
	{
		cout << "no data. ";
	}
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << total <<endl;
		cout << "Average: " << total / count <<endl;
	}
	fileIn.close();
	return 0;
}