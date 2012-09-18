#ifndef FACULTY_H
#define FACULTY_H

##define DEBUG 0
#define debug if (DEBUG) cout

#include <string>
#include <iostream>
#include "Employee.h"
using namespace std;

class Faculty : Public Employee
{
	public:
	
	protected:
	
	private:
		bool tenured; 
		float units; 
		vector <Course *> courses; 
};


#endif FACULTY_H