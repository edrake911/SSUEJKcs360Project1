#ifndef STUDENT_H
#define	STUDENT_H

#define DEBUG 0
#define debug if (DEBUG) cout

#include <string>
#include <iostream>
#include <vector>
#include "SSUPerson.h"
using namespace std;

class Student : virtual public SSUPerson
{
	public:
		Student();
		~Student();
		Student(const Student & S);
	
	protected:
		string major; 
		int currentUnits; 
		int unitsCompleted; 
		float GPA; 
		float tuition; 
		float balance; 
		vector <Course *> courses;
	
	private:
};


#endif 
