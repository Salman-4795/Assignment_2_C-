#include <iostream>
#include <iomanip>
#include "IntComplex.h"
using namespace std;

IntComplex::IntComplex() // Defining the default constructor
		{
			real=0;
			imaginary=0;
			
		}
IntComplex::IntComplex(const int& z,const int &n) // Defining the parameteric constructor
	{
		real=z;
		imaginary=n;
	}
		
		
int IntComplex::operator+(const IntComplex& e)const // Defining the overloading + operator
	{
		int sumReal=real+e.real;
		int sumImaginary=imaginary+e.imaginary;
		cout<<sumReal<<"+"<<sumImaginary<<"i\n";
		return 0;
	}
		
		
int IntComplex::operator-(const IntComplex& e)const // Defining the overloading - operator
	{
		int subReal=real-e.real;
		int subImaginary=imaginary-e.imaginary;
		cout<<subReal<<"+"<<subImaginary<<"i\n";
		return 0;
	}
int IntComplex::operator*(const IntComplex& e)const // Defining the overloading * operator
	{
		int prodReal = real * e.real - imaginary * e.imaginary;
       	int prodImaginary = real * e.imaginary + imaginary * e.real;
       	cout<<prodReal<<"+"<<prodImaginary<<"i\n";
       	return 0;
	}
int IntComplex::operator/(const IntComplex& e)const // Defining the overloading / operator
	{
		int divReal = (real * e.real + imaginary * e.imaginary) / (e.real * e.real + e.imaginary * e.imaginary);
       	int divImaginary = (imaginary * e.real - real * e.imaginary) / (e.real * e.real + e.imaginary * e.imaginary);
       	cout<<divReal<<"+"<<divImaginary<<"i\n";
       	return 0;
	}
void IntComplex:: display() // Defining the display function
	{
		cout<<real<<"+"<<imaginary<<"i"<<endl;
	}
