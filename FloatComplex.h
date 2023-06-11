#ifndef FLOATCOMPLEX_H
#define FloatCOMPLEX_H

#include "IntComplex.h"
class FloatComplex: public IntComplex
{
	private:
		float real,Imaginary;
	public:
		FloatComplex(); // Decleration of default constructor 
		FloatComplex(const float& l,const float &m); // Decleration of parameteric constructor
		float operator+(const FloatComplex& f)const; // Decleration for overloading + operator
		float operator-(const FloatComplex& f)const; // Decleration for overloading - operator
		float operator*(const FloatComplex& f)const; // Decleration for overloading * operator
		float operator/(const FloatComplex& f)const; // Decleration for overloading / operator
		void display(); // Decleration for display function
};

#endif
