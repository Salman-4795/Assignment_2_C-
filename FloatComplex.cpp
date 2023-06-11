#include <iostream>
#include "FloatComplex.h"

using namespace std;

FloatComplex::FloatComplex()
	{
		real=0.0;
		Imaginary=0.0;
	}
	FloatComplex::FloatComplex(const float& l,const float &m)
	{
		real=l;
		Imaginary=m;
	}
	float FloatComplex::operator+(const FloatComplex& f)const // Defining the overloading + operator
	{
		float sumReal = real+f.real;
		float sumImaginary = Imaginary+f.Imaginary;
		cout<<sumReal<<"+"<<sumImaginary<<"i\n";
		return 0.0;
	}
	float FloatComplex::operator-(const FloatComplex& f)const // Defining the overloading - operator
	{
		float subReal = real-f.real;
		float subImaginary = Imaginary-f.Imaginary;
		cout<<subReal<<"+"<<subImaginary<<"i\n";
		return 0.0; 
	}
	float FloatComplex::operator*(const FloatComplex& f)const // Defining the overloading * operator
	{
		float mulReal = real * f.real - Imaginary * f.Imaginary;
		float mulImaginary = real * f.Imaginary + Imaginary * f.real;
		cout<<mulReal<<"+"<<mulImaginary<<"i\n";
		return 0.0;
	}
	float FloatComplex::operator/(const FloatComplex& f)const // Defining the overloading / operator
	{
		float divReal = (real * f.real + Imaginary * f.Imaginary) / (f.real * f.real + f.Imaginary * f.Imaginary);
		float divImaginary = (Imaginary * f.real - real * f.Imaginary) / (f.real * f.real + f.Imaginary * f.Imaginary);
		cout<<divReal<<"+"<<divImaginary<<"i\n";
		return 0.0;
	}
	void FloatComplex::display() // Defining the display function
	{
		cout<<real<<"+"<<Imaginary<<"i"<<endl;
	}
