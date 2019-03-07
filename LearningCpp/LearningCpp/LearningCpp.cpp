// LearningCpp.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
/*
#include "LearningCpp.h"
#include <iostream>
#include <cstring>
#include "Box.h"
#include <vector>
#include "Student.h"

using namespace std;
*/




/*  //hello c++
int main()
{
	cout << "hello world" << endl;
    return 0;
}
*/






/* //visit struct member
struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main()
{
	Books book1;
	Books book2;
	
	strcpy_s(book1.title, "c++ Course");
	strcpy_s(book1.author, "xiaoyi");
	strcpy_s(book1.subject, "computer");
	book1.book_id = 001;

	strcpy_s(book2.title, "CSharp Couse");
	strcpy_s(book2.author, "xiaoyi");
	strcpy_s(book2.subject, "computer");
	book2.book_id = 002;

	cout << "The first book title is " << book1.title << endl;
	cout << "The first book author is " << book1.author << endl;
	cout << "The first book subject is " << book1.subject << endl;
	cout << "The first book ID is " << book1.book_id << endl;

	cout << "The second book title is " << book2.title << endl;
	cout << "The second book author is " << book2.author << endl;
	cout << "The second book subject is " << book2.subject << endl;
	cout << "The second book ID is " << book2.book_id << endl;

	system("pause");
}
*/








/* //Struct as a function parameter
int main()
{
	Book book1;
	Book book2;

	strcpy_s(book1.title, "c++ Course");
	strcpy_s(book1.author, "xiaoyi");
	strcpy_s(book1.subject, "computer");
	book1.book_id = 001;

	strcpy_s(book2.title, "CSharp Couse");
	strcpy_s(book2.author, "xiaoyi");
	strcpy_s(book2.subject, "computer");
	book2.book_id = 002;

	printBook(book1);
	printBook(book2);

	system("pause");

	return 0;
}

void printBook(struct Book book)
{
	cout << "The first book title is " << book.title << endl;
	cout << "The first book author is " << book.author << endl;
	cout << "The first book subject is " << book.subject << endl;
	cout << "The first book ID is " << book.book_id << endl;
};
*/






/* //struct point
int main()
{
	Book book1;
	Book book2;

	strcpy_s(book1.title, "c++ Course");
	strcpy_s(book1.author, "xiaoyi");
	strcpy_s(book1.subject, "computer");
	book1.book_id = 001;

	strcpy_s(book2.title, "CSharp Couse");
	strcpy_s(book2.author, "xiaoyi");
	strcpy_s(book2.subject, "computer");
	book2.book_id = 002;

	printBook(&book1);
	printBook(&book2);

	system("pause");

	return 0;
}

void printBook(struct Book *book)
{
	cout << "The first book title is " << book->title << endl;
	cout << "The first book author is " << book->author << endl;
	cout << "The first book subject is " << book->subject << endl;
	cout << "The first book ID is " << book->book_id << endl;
};
*/



/*
struct  point
{
	int a;
	int b;
};

int main()
{
	point pt;
	pt.a = 1;
	pt.b = 2;
	
	cout << pt.a << endl<<  pt.b << endl;
	system("pause");
	return 0;
}
*/



/* //Leanring class
int main()
{
	Box box1;
	Box box2;
	double volume = 0.0;

	box1.height = 5.0;
	box1.width = 6.0;
	box1.length = 7.0;

	box2.height = 10.0;
	box2.length = 12.0;
	box2.width = 13.0;

	volume = box1.length * box1.width * box1.height;
	cout << "The Box1's volume is " << volume << endl;

	volume = box2.length * box2.width * box2.height;
	cout << "The Box2's volume is " << volume << endl;

	system("pause");

	return 0;

}
*/





/*
int main()
{
	Box box1;
	Box box2;
	double volume;

	box1.setHeight(6);
	box1.setLength(5);
	box1.setWidth(7);

	box2.setLength(10);
	box2.setHeight(12);
	box2.setWidth(13);

	volume = box1.getVolume();
	cout << "The Box1's volume is " << volume << endl;

	volume = box2.getVolume();
	cout << "The Box2's volume is " << volume << endl;

	system("pause");

	return 0;
}
*/




/*   //example of student grade
int main()
{
	Student xiaoyi;
	Student *xiaoyi_point = &xiaoyi;
	xiaoyi.input(xiaoyi_point);
	xiaoyi.show_student_message(xiaoyi_point);
	system("pause");
	return 0;
}
*/



/*
int main()
{
	cout << "Come up and c++ me some time.";
	cout << endl;
	cout << "You won't regret it!" << endl;
	cin.get();
	return 0;
}
*/


/*
//learning vector
int main()
{
	vector<int> test;
	test.push_back(1);
	test.push_back(2);
	for (int i = 0; i < test.size(); i++)
	{
		cout << test[i] << endl;
	}
	cin.get();
}
*/


/*
//declare and assign variable
int main()
{
	int carrots = 25;
	cout << "I have ";
	cout << carrots;
	cout << " carrots" << endl;
	carrots = carrots - 1;
	cout << "crunch crunch. Now I have " << carrots << " carrots" << endl;
	cin.get();
	return 0;
}
*/


/*  //getinfo
int main()
{
	int corrots;
	cout << "How many carrots do you have??"<<endl;
	cin >> corrots;
	cout << "Here are two more."<<endl;
	corrots += 2;
	cout << "now you have " << corrots << " carrots" << endl;
	return 0;
}
*/



/*  // ourfun
void simon(int);
int main()
{
	simon(3);
	cout << "Pick an integer: " << endl;
	int times;
	cin >> times;
	simon(times);
	return 0;
}

void simon(int n)
{
	cout << "simon says touch his toe " << n << " times " << endl;
}
*/



/*
// Converts stone to pounds
double StoneToPounds(double);
int main()
{
	cout << "Enter the weight in stone"<<endl;
	double stone;
	cin >> stone;
	double pounds = StoneToPounds(stone);
	cout << stone << " stone = " << pounds << " pounds. " << endl;
	return 0;
}

double StoneToPounds(double n)
{
	return n * 14;
}
*/




/*
#include "stdafx.h"
#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int n_int = INT_MAX;
	int n_short = SHRT_MAX;
	int n_long = LONG_MAX;

	cout << "int is " << sizeof(n_int) << "bytes." << endl;
	cout << "short is " << sizeof(n_short) << "bytes." << endl;
	cout << "long is " << sizeof(n_long) << "bytes." << endl;

	cout << "Maximum values:" << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long :" << n_long << endl;

	cout << "Minium int value = " << INT_MIN << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;
	return 0;
}
*/




/*
#include "stdafx.h"
#include <iostream>
#include <climits>
#define ZERO 0

using namespace std;

int main()
{
	short sam = SHRT_MAX;
	unsigned short sue = sam;

	cout << "Sam has " << sam << " dollars and Sue has " << sue << "dollars" << endl << "Add $1 to each account." << endl;

	sam = sam + 1;
	sue += 1;
	cout << "Now Sam has " << sam << " dollars and Sue has " << sue << "dollars" << endl;

	sam = ZERO;
	sue = ZERO;
	cout << "Now Sam has " << sam << " dollars and Sue has " << sue << "dollars" << endl<<"Take $1 from each account." << endl;

	sam -= 1;
	sue -= 1;
	cout << "Now Sam has " << sam << " dollars and Sue has " << sue << "dollars" << endl;
	return 0;
}
*/





/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "Monsieur cuts a striking figure! \n";
	cout << "Chest = " << chest << endl;
	cout << "waist = " << waist << endl;
	cout << "inseam = " << inseam << endl;

	return 0;
}
*/




/*
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure! \n";
	cout << dec;
	cout << "chest = " << chest << endl;
	cout << hex;
	cout << "inseam = " << inseam << endl;
	cout << oct;
	cout << "waist " << waist << endl;
	return 0;
}
*/




/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter a character" << endl;
	cin >> ch;
	cout << "Hollam! Thank you for the " << ch << " character" << endl;
	return 0;
}
*/





/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;

	ch = ch + 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);
	cout.put('!');
	cout <<endl<< "Done" << endl;
	return 0;

}
*/




/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	cout << "\aOperation \"HyperHype\" is now activated! \n";
	cout << "Enter your agent code: _______\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified! Proceed with Plan Z3! \n";
	return 0;
}
*/




/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	cout.setf(ios::fixed, ios::floatfield);
	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;
	const float million = 1.0e6;
	cout << "tub = " << tub << endl;
	cout << "a million tub = " <<million * tub << endl;
	cout << "mint = " << mint << endl;
	cout << "a million mint = " <<million * mint << endl;
	return 0;
}
*/





/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	float a = 2.34E+22f;
	float b = a + 1.0f;
	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;
	return 0;
}
*/




/*
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float num1, num2;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter another number:";
	cin >> num2;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num1 + num2 = " << num1 + num2 << endl;
	cout << "num1 - num2 = " << num1 - num2 << endl;
	cout << "num1 * num2 = " << num1 * num2 << endl;
	cout << "num1 / num2 = " << num1 / num2 << endl;
	return 0;
}
*/





/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Integer division: 9/5 = " << 9 / 5 << endl;
	cout << "Float-point division: 9.0 / 5.0 = " << 9.0 / 5.0 << endl;
	cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
	cout << "double constants: 1e7f/9.0f= " << 1e7f / 9.0f << endl;
	return 0;
}
*/



/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	const int lbsPerStone = 14;
	int lbs;
	cout << "Enter your weight in pounds: ";
	cin >> lbs;
	int stone = lbs / lbsPerStone;
	int pounds = lbs % lbsPerStone;
	cout << lbs << " pound = " << stone << " stone + " << pounds << " pounds" << endl;
	return 0;
}
*/


/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int auks, bats, coots;
	auks = 11.99 + 19.99;
	bats = (int) 11.99 + (int)19.99;
	coots = int(11.99) + int(19.99);
	cout << "auks = " << auks << endl;
	cout << "bats = " << bats << endl;
	cout << "coots = " << coots << endl;

	char ch = 'Z';
	cout << "the code for " << ch << " is " << int(ch) << endl;
	return 0;
}
*/