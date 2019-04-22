#include "stdafx.h"
/*
#include <iostream>
using namespace std;
int main()
{
for (int i = 0; i < 5; i++)
{
cout << "C++ Knows loop." << endl;
}
cout << "C++ knows when to stop." << endl;
return 0;
}
*/








/*
#include <iostream>
using namespace std;
int main()
{
cout << "Enter the starting countdown value: ";
int value;
cin >> value;
int i;
for (i = value; i > 0; i--)
{
cout << "i = " << i << endl;
}
cout << "Done now that i = " << i << endl;
return 0;
}
*/






/*
#include <iostream>
using namespace std;
int main()
{
int x;
cout << "The expression x =100 has the value " << (x = 100) << endl;
cout << "Now x = " << x << endl;
cout << "The expression x < 3 has the value " << (x < 3) << endl;
cout << "The expression x > 3 has the value " << (x > 3) << endl;
cout.setf(ios_base::boolalpha);
cout << "The expression x < 3 has the value " << (x < 3) << endl;
cout << "The expression x > 3 has the value " << (x > 3) << endl;
return 0;
}
*/






/*
#include <iostream>
using namespace std;
int main()
{
	const int ArSize = 15;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	double Factorials[ArSize];
	Factorials[0] = 1;
	Factorials[1] = 1;
	for (int i = 2; i <= ArSize; i++)
	{
		Factorials[i] = i * Factorials[i - 1];
	}
	for (int j = 0; j <= ArSize; j++)
	{
		cout << j << "! = " << Factorials[j] << endl;
	}
	return 0;
}
*/







/*
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter an integer: ";
	int by;
	cin >> by;
	cout << "Counting by" << by << endl;
	for (int i = 0; i < 100; i = i + 17)
	{
		cout << i << endl;
	}
	return 0;
}

*/





/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Enter a word: ";
	string word;
	cin >> word;
	for (int i = word.size()-1; i >= 0; i--)
	{
		cout << word[i];
	}
	cout << endl << "Bye." << endl;
	return 0;
}
*/





/*
#include <iostream>
using namespace std;
int main()
{
	int a = 20;
	int b = 20;
	cout << "a = " << a << "   b = " << b << endl;
	cout << "a++ = " << a++ << "    ++b = " << ++b << endl;
	cout << "a = " << a << "   b = " << b << endl;
	return 0;
}
*/





/*
#include <iostream>
using namespace std;
int main()
{
	cout << "The Amazing Accounto will sum and average: ";
	cout << "five numbers for you.\n";
	cout << "please enter five values : \n";
	double number;
	double sum = 0;
	for (int i = 1 ; i <= 5; ++i)
	{
		cout << "Value " << i << ":   ";
		cin >> number;
		sum += number;
	}

	cout << "Five exquisite choices indeed! ";
	cout << "The sum to " << sum << endl;
	cout << "The average to " << sum / 5 << endl;
	cout << "The amazing accounto bids you adieu!" << endl;
	return 0;
}

*/






/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Enter a word: ";
	string word;
	cin >> word;
	cout << word << endl;
	for (int i = 0, j = word.size()-1; i < j; i++, j--)
	{
		char temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << endl;
	cout << "Done" << endl;
	cout << "xiaoyi at company" << endl;
	return 0;
}
*/







/*
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ++ch)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word <<endl;
	return 0;
}
*/





/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word = "?ate";
	for (char ch = 'a'; word != "mate"; ++ch)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
	return 0;
}
*/





/*
#include <iostream>
using namespace std;
int main()
{
	const int ArSize = 20;
	char name[ArSize];
	cout << "Your first name, please: ";
	cin >> name;
	cout << "Here is your name, verticalized and ASCIIized:"<<endl;
	int i = 0;
	while (name[i])
	{
		cout << name[i] << ":   " << int(name[i]) << endl;
		i++;
	}
	return 0;
}
*/




/*
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	cout << "Enter the delay time: " << endl;
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	clock_t start = clock();
	while (clock() - start < delay)
	{
		;

	}
	cout << "Done" << endl;
	return 0;
}
*/





/*
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter my favorite number:" << endl;
	float number;
	do
	{
		cin >> number;
	} while (number!=7);
	cout << "Right, my favorite number is " << number << endl;
	return 0;
}
*/





/*
#include <iostream>
using namespace std;
int main()
{
	int count = 0;
	char ch;
	cout << "Enter characters; enter # to quit" << endl;
	cin >> ch;
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin >> ch;
	}
	cout << endl << count << " characters read \n";
	return 0;
}
*/




/*
#include <iostream>
using namespace std;
int main()
{
	int count = 0;
	char ch;
	cout << "Enter characters; enter # to quit" << endl;
	cin.get(ch);
	while (ch!='#')
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << "characters to read! " << endl;
	return 0;
}
*/




#include <iostream>
using namespace std;
int main()
{
	int count = 0;
	char ch;
	cin.get(ch);
	while (cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << "characters to read!" << endl;
	return 0;
}
