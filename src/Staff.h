#ifndef STAFF 
#define STAFF
#include "Employee.h"

class Staff: public Employee
{
	public:
		Staff();

	private:
	
	protected:
		int hours;
		Employee * supervisor;

};

#endif
