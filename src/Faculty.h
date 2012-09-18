#ifndef FACULTY_H
#define FACULTY_H

#define DEBUG 0
#define debug if (DEBUG) cout

#include <string>
#include <iostream>
#include "Employee.h"
#include "Course.h"
#include <vector>
using namespace std;
class Course;
class Faculty : public Employee
{
	public:
	
	protected:
	
	private:
		bool tenured; 
		float units; 
		vector <Course *> courses; 
};


#endif 
