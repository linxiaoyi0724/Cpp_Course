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
	strcpy_s(charr1, charr2

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
	inflatable guest[2] = { {"xiaoyi", 1.88, 29.99}, {"xiaoke", 1.78,25.99} };
	cout << "The guests " << guest[0].name << " and " << guest[1].name << " have a combined volume of " << guest[0].volume + guest[1].volume << endl;
	return 0;

}
*/









/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int donuts = 6;
	double cups = 4.5;
	cout << "donuts value: " << donuts << endl << "donuts address: " << &donuts << endl;
	cout << "cups values: " << cups << endl << "cups address: " << &cups << endl;
	return 0;
}
*/






/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int updates = 6;
	int* p_updates;
	p_updates = &updates;

	cout << "Values: updates = " << updates << endl;
	cout << "*p_updates = " << *p_updates << endl;

	cout << "Addresses: &updates = " << &updates << endl;
	cout << "p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
	cout << "Now updates = " << *p_updates << endl;
	return 0;
}
*/









/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int higgen = 5;
	int* pt = &higgen;
	cout << "higgen value is " << higgen << "    " << "higgen addresss is " << &higgen << endl;
	cout << "pt value is " << *pt << "   " << " pt address " << pt << endl;
	return 0;
}
*/










/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	cout.setf(ios_base::floatfield, ios_base::fixed);
	int* pt = new int;
	*pt = 1001;
	cout << "int - value: " << *pt << " :location = " << pt << endl;

	double* pd = new double;
	*pd = 1000001.01;
	cout << "double - value: " << *pd << " :location = " << pd << endl;

	cout << "sizeof pt " << sizeof(pt) << endl;
	cout << "size of *pt " << sizeof(*pt) << endl;

	cout << "sizeof pd " << sizeof(pd) << endl;
	cout << "size of *pd " << sizeof(*pd) << endl;

	return 0;
}
*/



/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	double* p3 = new double[3];
	p3[0] = 0.1;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1]: " << p3[1] << endl;
	p3 = p3 + 1;
	cout << "now p3[0]: " << p3[0] << endl;
	cout << "now p3[1]: " << p3[1] << endl;
	p3 = p3 - 1;
	delete[] p3;
	return 0;
}
*/





/*
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	double wages[3] = { 1000.0, 2000.0,3000.0 };
	short stacks[3] = { 3,2,1 };

	double* pw = wages;
	short* ps = &stacks[0];

	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "pw = " << pw << ", *pw = " << *pw << endl;

	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "ps = " << ps << ", *ps = " << *ps << endl;

	cout << "access two elements with array notation \n";
	cout << "stacks[0]" << stacks[0] << " , stacks[1] " << stacks[1] << endl;

	cout << "access two element with pointer notation \n";
	cout << "*stacks = " << *stacks << " , *(stacks+1) " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = size of wages array\n";
	cout << sizeof(pw) << " = size of pw pointer \n";

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
	char animal[20] = "bear";
	const char* bird = "wren";
	char* pc;

	cout << animal << " and " << bird << endl;

	cout << "Enter a kind of animal: ";
	cin >> animal;

	pc = animal;
	cout << pc << "s!" << endl;
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << pc << " at " << (int*)pc << endl;

	pc = new char[strlen(animal) + 1];
	strcpy(pc, animal);
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << pc << " at " << (int*)pc << endl;
	delete[] pc;
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
	inflatable* ps = new inflatable;
	cout << "Enter your name of inflatable";
	cin.get(ps->name, 20);
	cout << "Enter your volume";
	cin >> (*ps).volume;
	cout << "Enter your price";
	cin >> ps->price;

	cout << "Name: " << (*ps).name << endl;
	cout << "Volume: " << ps->volume << endl;
	cout << "Price: $" << ps->price << endl;
	delete ps;
	return 0;
}
*/







/*
#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;
char* GetName(void);

int main()
{
	char* name;
	name = GetName();
	cout << name << " at " << (int*)name << endl;
	delete[] name;

	name = GetName();
	cout << name << " at " << (int*)name << endl;
	delete[] name;

	return 0;

}

char* GetName()
{
	char temp[100];
	cout << "Enter your name: " << endl;
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);
	return pn;
}
*/



/*
1. char actor[30]
2. short betsie[100]
3. float chuck[13]
4. long double dipsea[64]

2. int a[5] = { 1,3,5,7,9 };
3. int even = a[0] + a[4];
4. cout << ideas[1] << endl;
5 char ch[100] = "cheeseburger";

6. struct fish
{
	char variety[100];
	int weight;
	double length;
};

7. fish fh = {
	"caoyu",
	10,
	18
}

8. enum Response = { No:0, Yes : 1,Maybe : 2 };
9. double* ted = new double;
cout << *ted << endl;

10. float* ps = treacle;
cout << ps[0] << endl;
cout << ps[9] << endl;



// 11.
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	cout << " Enter an integer:  ";
	int n;
	cin >> n;
	int* pn = new int[n];

}

12. “ª∂—µÿ÷∑
*/

#include "stdafx.h"