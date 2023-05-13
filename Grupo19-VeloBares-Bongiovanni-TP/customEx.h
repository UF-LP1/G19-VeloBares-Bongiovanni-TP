#ifndef _CUSTOMEX_H
#define _CUSTOMEX_H

#include <exception>

using namespace std;

namespace ExNums {
	class NegValue : public exception {

	class NegValue : public exception; 
	{
		Const char* what() const throw ();
	};
}

#endif //_CUSTOMEX_H