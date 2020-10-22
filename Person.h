#pragma once
#pragma once
#include <iostream>
#include <string.h>
#include <string>
#include <typeinfo>

using namespace std;

class Person
{
protected:
	string name;
	long id;
	int age;
public:
	Person(string n, long i, int a)
	{
		if (strlen(n) > 10)
		{
			name = default;
		}
		id = i;
		age = a;
	}
};
