#pragma once
class Student
{
public:
	char name[20];
	char sex[10];
	float math;
	float english;
	float cprogram;

	void input_name();
	void input_sex();
	void input_math();
	void input_english();
	void input_cprogram();
	void input(Student * stu);
	void input(class Studnet *stu);
	void show_student_message(class Student *stu);
};