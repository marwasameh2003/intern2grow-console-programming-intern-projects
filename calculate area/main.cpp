#include <iostream>

using namespace std;
// square area

double squareArea()
{
    double side;
    cout<<"Please enter side length: ";
    cin>> side;
    if(side >= 0)
    {
        cout<<"The area of the square = "<<side*side<<endl;
    }
    else
    {
        cout<<"side length cannot be negative\n";
    }
}
double recArea()
{
    double height;
    cout<<"Please enter the height: ";
    cin>> height;
    double width;
    cout<< "Please enter the width: ";
    cin>>width;
    if(height>=0 && width>=0)
    {
        cout<< "The area of the rectangle = "<< height*width<<endl;
    }
    else
    {
        cout<<"length cannot be negative\n";
    }
}
double circleArea()
{
    double radius;
    cout<< "Please enter the radius length: ";
    cin>> radius;
    if(radius>=0)
    {
    cout<< "The area of the circle = "<< (3.14)*(radius*radius)<<endl;
    }
    else
    {
        cout<<"radius length cannot be negative\n";
    }
}
int main()
{
    cout<<"Welcome the area calculator program\n";
    cout<<"Please choose which shape you want to calculate area for:\n";
    cout<<"1- Square\n2- Rectangle\n3-Circle\n";
    int choice;
    cin>> choice;
    switch(choice)
    {
        case 1: squareArea(); break;
        case 2: recArea(); break;
        case 3: circleArea();break;
        default: cout<<"Invalid choice\n";
    }
    return 0;
}
