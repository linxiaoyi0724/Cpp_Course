/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int yamscost[3] = { 20,30,5 };
	cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " costs " << yamscost[1] << " center per yam \n";
	int total = yams[0] * yamscost[0] + yams[1] * yamscost[1] + yams[2] * yamscost[2];
	cout << "The total yam expense is " << total << " cents.\n";
	cout << "\n Size of yams array is " << sizeof(yams) << " bytes" << endl;
	cout << "\n Size of one element is " << sizeof(yams[0]) << " bytes" << endl;
	return 0;
}
*/





/*
#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	const int Size = 15;
	char Name1[Size];
	char Name2[Size] = "C++owboy";
	cout << "hello! I'm " << Name2 << ". what is your name?" << endl;
	cin >> Name1;
	cout << "well. " << Name1 << " your name has " << strlen(Name1) << " letters and is stored in an array of " << sizeof(Name1) << " bytes." << endl;
	cout << "Your initial is " << Name1[0] << endl;
	Name2[3] = '\0';
	cout << "Here are the first 3 characters of my name: " << Name2 << endl;
	return 0;
}
*/