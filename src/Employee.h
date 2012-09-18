#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#define DEBUG 0
#define debug if (DEBUG) cout

#include <string>
#include <iostream>
#include "SSUPerson.h"
using namespace std;

class Employee : virtual public SSUPerson
{
	public:
	Employee();
	~Employee();
	Employee(const Employee & other);
	
	protected:
	
	private:
		string department; 
		int years; 
		float salary; 
		string title;
};


#endif 
