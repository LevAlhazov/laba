#pragma once
#include"Person.h"
#include <iostream>
#include <string.h>
#include <string>
#define MAX 10
using namespace std;

class student :public virtual Person {
private:
	int Average;
	string institute;

public:
	student(string n, long i, int a, int avg, string inst) :Person(n, i, a) {
		Average = avg;
		if (inst.length() > 10)
		{
			institute = "default";
		}
		else
			institute = inst;
	}
};