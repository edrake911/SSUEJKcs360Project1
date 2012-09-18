#ifndef COURSE_H
#define	COURSE_H

#define DEBUG 0
#define debug if (DEBUG) cout

#include <string>
#include <iostream>
#include "Faculty.h"
using namespace std;
class Faculty;
class Course
{
	public:
		Course();
		~Course();
		Course(const Course & C);
	
	protected:
	
	private:
		string name;
		int ID;
		int enrollment;
		string location;
		string time;
		Faculty * instructor;
};
#endif 
