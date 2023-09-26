#ifndef CALCULATOR_LIBRARY_H_INCLUDED
#define CALCULATOR_LIBRARY_H_INCLUDED


#include<iostream>
double add(double num1 , double num2)
{
    return num1+num2;
}
double subtract(double num1 , double num2)
{
    return num1-num2;
}
double multiply(double num1, double num2)
{
    return num1* num2;
}
double divide(double num1 , double num2)
{
    if(num2!=0)
    {
        return num1/num2;
    }
    else
    {
        cout<<"cannot divide by zero\n";
    }
    return 0.0;
}

#endif // CALCULATOR_LIBRARY_H_INCLUDED
