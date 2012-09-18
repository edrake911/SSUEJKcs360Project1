
#ifndef ATHLETE
#define ATHLETE
#include "Student.h"

class Athlete : public Student
{
	public:
		Athlete();

	private:
	
	protected:
		string sport;
		float scholarship;

};

#endif
