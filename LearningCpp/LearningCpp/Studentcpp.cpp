#include "stdafx.h"
#include "Student.h"
#include <iostream>
using namespace std;


void Student::input_name()
{
	cout << "input student's name" << endl;
	cin.getline(name, sizeof(name));
	cout << "student's name " << name << endl;
}

void Student::input_sex()
{
	cout << "input student's sex" << endl;
	cin.getline(sex, sizeof(sex));
	cout << "student' sex " << sex << endl;
}

void Student::input_math()
{
	cout << "input student's math" << endl;
	cin >> math;
}

void Student::input_english()
{
	cout << "input student's english" << endl;
	cin >> english;
}

void Student::input_cprogram()
{
	cout << "input student's cprogram" << endl;
	cin >> cprogram;
}

void Student::input(class Student *stu)
{
	stu->input_name();
	stu->input_sex();
	stu->input_math();
	stu->input_english();
	stu->input_cprogram();
}

void Student::show_student_message(class Student *stu)
{
	cout << "student's name " << stu->name << endl;
	cout << "student's sex " << stu->sex << endl;
	cout << "student's math " << stu->math << endl;
	cout << "student's english " << stu->english << endl;
	cout << "student's cprogram " << stu->cprogram << endl;
}