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







/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "What's you name?" <<endl;
	cin >> name;
	cout << "What's your favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert << " for you." << name << ".\n";
	return 0;
}
*/




/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "Enter your name:\n";
	cin.getline(name, ArSize);
	cout << "Enter your favorite dessert: \n";
	cin.getline(dessert, ArSize);
	cout << "I have some dilicious " << dessert << " for you " << name << endl;
	return 0;
}
*/






/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "Enter your name: " << endl;
	cin.get(name, ArSize).get();
	cout << "Enter your favorite dessert: " << endl;
	cin.get(dessert, ArSize).get();
	cout << "I have some dilicious " << dessert << " for you " << name << endl;
	return 0;
}
*/








/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	cout << "What year your house built? " << endl;
	int year;
	(cin >> year).get();
	cout << "What is its street address? " << endl;
	char addresss[80];
	cin.getline(addresss, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << addresss << endl;
	cout << "Done!" << endl;
	return 0;
}
*/






/*
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";
	cout << "Enter a kind of feline:" << endl;
	cin >> charr1;
	cout << "Enter another kind of feline: " << endl;
	cin >> str1;
	cout << "Here are some feline:\n";
	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
	cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;
	cout << "The third letter in " << str2 << " is " << str2[2] << endl;
	return 0;
}
*/








/*
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1 = "penguin";
	string str2, str3;
	cout << "You can assign one string object to another: s2 = s1 \n";
	str2 = str1;
	cout << "s1: " << str1 << ", s2: " << str2 << endl;
	cout << "You can assign a C-style string to a string object. \n";
	cout << "s2 = \"buzzard\" \n";
	str2 = "buzzard";
	cout << "s2: " << str2 << endl;
	cout << "you can concatenate strings: s3 = s1 + s2 \n";
	str3 = str1 + str2;
	cout << "s3: " << str3 << endl;
	cout << "You can append strings.\n";
	str1 += str2;
	cout << "s1 += s2 yields s1 = " << str1 << endl;
	str2 += " for a day";
	cout << "s2 += \"for a day \" yield s2 = " << str2 << endl;
	return 0;
}
*/










/*
#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
	char charr1[20];
	char charr2[20] = "jaguar";

	string str1;
	string str2 = "panther";

	str1 = str2;
	strcpy_s(charr1, charr2);

	str1 += " paste";
	strcat_s(charr1, " juice");

	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << "The string " << str1 << " contains " << len1 << " characters.\n";
	cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
	return 0;
}
*/









/*
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	char charr1[20];
	string str1;
	cout << " The Length of string in charr1 before input: " << strlen(charr1) << endl;
	cout << "The Length of string in str1 before input: " << str1.size()<< endl;

	cout << "Enter a line of text: \n";
	cin.getline(charr1, 20);
	cout << "You entered: " << charr1 << endl;

	cout << "Enter another line of text: " << endl;
	getline(cin, str1);
	cout << "You entered: " << str1 << endl;

	cout << "Length of string in charr1 after input: " << strlen(charr1) << endl;
	cout << "Length of string in str1 after input: " << str1.size() << endl;
	return 0;
}
*/






/*
#include "stdafx.h"
#include <iostream>
using namespace std;
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	inflatable guest = {
		"xiaoyi",
		1.88,
		29.99
	};

	inflatable pal = {
		"xiaoke",
		1.78,
		25.99
	};

	cout << "Expand your guest list with" << guest.name << " and " << pal.name << endl;
	cout << "you have both for $ " << guest.price + pal.price << endl;
	return 0;
}
*/





/*
#include "stdafx.h"
#include <iostream>
using namespace std;
struct  inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	inflatable bouquet = { "xiaoyi", 1.88, 29.99 };
	cout << "bouquet: " << bouquet.name << " for $ " << bouquet.price << endl;
	inflatable choice = bouquet;
	cout << "choice: " << choice.name << " for $ " << choice.price << endl;
	return 0;
}
*/






#include "stdafx.h"
#include <iostream>
using namespace std;
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	inflatable guest[2] = { {"xiaoyi", 1.88, 29.99}, {"xiaoke", 1.78,25.99} };
	cout << "The guests " << guest[0].name << " and " << guest[1].name << " have a combined volume of " << guest[0].volume + guest[1].volume << endl;
	return 0;

}