
#ifndef STUDENT 
#define STUDENT
#include "SSUPerson.h"

class Student : virtual public  SSUPerson
{
	public:
		Student();

	private:
	
	protected:
		string major;
		int currentUnits;
		int unitsCompleted;
		float GPA;
		float tuition;
		float balance;
		vector <Course *> courses;

};

#endif
