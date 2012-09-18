#ifndef SSUPERSON_H
#define	SSUPERSON_H

##define DEBUG 0
#define debug if (DEBUG) cout

#include <string>
#include <iostream>
using namespace std;

class SSUPerson
{
	public:
		SSUPerson();
		~SSUPerson();
		SSUPerson(const SSUPerson & P)
		
	
	protected:
		string name; 
		int ID; 
		string eMail;
	
	private:
};


#endif SSUPERSON_H