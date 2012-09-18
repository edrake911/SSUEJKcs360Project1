#ifndef STUDENTEMPLOYEE_H
#define STUDENTEMPLOYEE_H

#define DEBUG 0
#define debug if (DEBUG) cout

#include <string>
#include <iostream>
#include "Staff.h"
#include "Student.h"
using namespace std;

class StudentEmployee : public Staff, public Student
{
	public:
		StudentEmployee();
		~StudentEmployee();
		StudentEmployee( const StudentEmployee & S);
	
	
	protected:
	
	private:
		int maxHours;
};


#endif 
