#ifndef FACULTY 
#define FACULTY
#include "Employee.h"

class Faculty : public Employee 
{
	public:
		Faculty();

	private:
	
	protected:
		bool tenured;
		float units;
		vector <Course *> courses;

};

#endif
