#ifndef INTCOMPLEX_H
#define INTCOMPLEX_H

class IntComplex
{
	private:
		int real,imaginary;
	public:
		IntComplex(); // Decleration of default constructor 
		IntComplex(const int& z,const int &n); // Decleration of parameteric constructor
		int operator+(const IntComplex& e)const; // Decleration for overloading + operator
		int operator-(const IntComplex& e)const; // Decleration for overloading - operator
		int operator*(const IntComplex& e)const; // Decleration for overloading * operator
		int operator/(const IntComplex& e)const; // Decleration for overloading / operator
		void display(); // Decleration for display function
};

#endif
