#pragma once
#include "Person.h"
#include <iostream>
#include <string.h>
#include <typeinfo>
using namespace std;

class WorkingStudent: public Student, public Employee
{
public:
	WorkingStudent(string n, long i, int a, int avg, string inst,float salary) : Person(n,i,a), student(avg,inst), Employee(salary) {};
	~WorkingStudent() {};

private:
	bool same_institue;
};
