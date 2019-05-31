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




/*
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
*/




/*
#include <iostream>
using namespace std;
int main()
{
	int ch;
	int count = 0;
	while ((ch = cin.get()) != EOF)
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl << count << " characters read\n";
	return 0;
}
*/







/*
#include <iostream>
using namespace std;
const int City = 5;
const int Year = 4;
int main()
{
	const char* cities[City] = {
		"beijing",
		"shanghai",
		"chongqin",
		"tianjin",
		"xianggang"
	};

	int MaximumTemp[Year][City] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20}
	};

	cout << "The Maximum temperatures: " << "\n\n";
	for (int city = 0; city < City; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Year; ++year)
		{
			cout << MaximumTemp[year][city] << "\t";
		}
		cout << endl;
	}
	return 0;
}
*/




/*
1. 入口循环条件是指在先判断循环条件是否为真，如果循环条件为false,它将不进行循环。
   出口循环条件是指先进行循环后判断循环条件是否为真，哪怕循环条件为假，它也会循环一次。
   for 和 while 都属于入口循环条件，
   do while 属于出口循环条件。

2. 01234

3. 0369
   12

4. 68

5. k = 8



6. 

#include <iostream>
using namespace std;
int main()
{
	int num = 1;
	while (num <=64)
	{
		cout << num << endl;
		num *= 2;
	}
	return 0;
}

7.    用{}

8  第一个有效， 第二个y = 1;

9  cin>>ch 会自动忽略空格逗号之类的。
   cin.get(ch) 和 ch= cin.get() 会读取逗号跟空格之类的字符。

*/




