#ifndef STAFF_H
#define STAFF_H

##define DEBUG 0
#define debug if (DEBUG) cout

#include <string>
#include <iostream>
#include "Employee.h"
using namespace std;

class Staff : public Employee
{
	public:
		Staff();
		~Staff();
		Staff(const Staff & S);
	
	protected:
		int hours; 
		Employee * supervisor;
	
	private:
};


#endif STAFF_H