// LearningCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LearningCpp.h"
#include <iostream>
#include <cstring>
#include "Box.h"
#include <vector>
#include "Student.h"

using namespace std;


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




