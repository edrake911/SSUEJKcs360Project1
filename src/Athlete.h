#ifndef ATHLETE_H
#define	ATHLETE_H

#define DEBUG 0
#define debug if (DEBUG) cout

#include <string>
#include <iostream>
#include "Student.h"
using namespace std;

class Athlete : public Student
{
	public:
	Athlete();
	~Athlete();
	Athlete(const Athlete & A);
	
	protected:
	
	private:
		string sport; 
		float scholarship;
};


#endif ATLETE_H