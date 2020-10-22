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
		if (n.length() > 10)
		{
			name = "default";
		}
		else
		name = n;
		id = i;
		age = a;
	}
	virtual ~Person() {};
};
