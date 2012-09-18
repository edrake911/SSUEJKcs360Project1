#ifndef ATHLETE
#define ATHLETE
#include "Student.h"
#include "Employee.h"
class StudentEmployee: public Student, public Staff
{
	public:
		StudentEmployee();

	private:
	
	protected:
		int maxHours;

};

#endif
