#include <iostream>
#include <cstdlib>
#include "IntComplex.h"
#include "FloatComplex.h"
using namespace std;
int main(int argc, char* argv[]) {
    if (argc != 9) 
    {
        cout << "Invild arguments\n";
        return 1;
    }
    
    int Ireal1 = atoi(argv[1]); // taking 1st value int value from command line
    int Iimag1= atoi(argv[2]);  // taking 2nd value int value from command line
    int Ireal2 = atoi(argv[3]);  // taking 3rd value int value from command line
    int Iimag2 = atoi(argv[4]);  // taking 4th value int value from command line
    
    float Freal1 = atof(argv[5]);  // taking 1st value float value from command line
    float Fimag1 = atof(argv[6]);  // taking 2nd value float value from command line
    float Freal2 = atof(argv[7]);  // taking 3rd value float value from command line
    float Fimag2 = atof(argv[8]);  // taking 4th value float value from command line

    
    IntComplex intcomp1(Ireal1, Iimag1); // making 1st instance of IntComplex class
    IntComplex intcomp2(Ireal2, Iimag2); // making 2nd instance of IntComplex class
    FloatComplex floatcomp1(Freal1, Fimag1); // making 1st instance of FloatComplex class
    FloatComplex floatcomp2(Freal2, Fimag2); // making 2nd instance of FloatComplex class
 
    cout<<"1. Complex numbers for int are: "<<endl;
    intcomp1.display();
    intcomp2.display();
    //displaying float complex numbers
    cout<<endl<<"2. complex numbers for float are: "<<endl;
    floatcomp1.display();
    floatcomp2.display();

    //dispalying results for integer complex number operations
    cout<<endl<<"INT OPERATIONS RESULTS GIVEN BELOW:"<<endl<<endl;
    cout <<"Addition for intcomplex: ";
    intcomp1 + intcomp2;
    cout<<endl;

    cout <<"Subtraction for intcomplex: ";
    intcomp1 - intcomp2;
    cout<<endl;

    cout <<"Multiplication for intcomplex: ";
    intcomp1 * intcomp2;
    cout<<endl;

    cout <<"Division for intcomplex: ";
    intcomp1 / intcomp2;
    cout<<endl;
    
    
    //dispalying results for integer complex number operations  
    cout<<endl<< "FLOAT OPERATIONS RESULTS GIVEN BELOW:"<<endl<<endl;
    cout << "Addition of float complex number: ";
    floatcomp1 + floatcomp2;
    cout<<endl;
    
    cout << "Subtraction for floatcomplex: ";
    floatcomp1 - floatcomp2;
    cout<<endl;
    
    cout << "Multiplication for floatcomplex: ";
    floatcomp1 * floatcomp2;
    cout<<endl;
    
    cout << "Division for floatcomplex: ";
    floatcomp1 / floatcomp2;
    cout<<endl;
    }
