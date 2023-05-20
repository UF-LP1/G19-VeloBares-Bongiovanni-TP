#ifndef _CUSTOMEX_H
#define _CUSTOMEX_H

#include <exception>
#include <string>
using namespace std;

class NegValue : public exception
{
	const char* what() const throw (); 
};


#endif //_CUSTOMEX_H