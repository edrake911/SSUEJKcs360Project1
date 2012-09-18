#ifndef EMPLOYEE 
#define EMPLOYEE
#include "SSUPerson.h"

class Employee: virtual public SSUPerson
{
	public:
		Employee();

	private:
	
	protected:
		string department;
		int years;
		float salary;
		string title;
		
};

#endif
