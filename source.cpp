﻿#include "stdafx.h"
#include <iostream>

using namespace std;

class Circle
{//declares variables
private:
    double pi;
    double radius;

public:
    Circle()
    {//defines variables
        pi = 3.14159; // pi is a double initialized with the value 3.14159
        radius = 0.0; //default constructor sets radius to 0.0
    }

    Circle(double radius)
    {
        pi = 3.14159;
        this->radius = radius;
    }

    void setRadius(double radius)//this mutator function captures the input of the user for radius and stores the value and returns it to user
    {
        this->radius = radius;
    }

    double getRadius() // an accessor function for radius variable
    {
        return radius;
    }

    double getArea()//this calculates the area based on the input of pi and radius from user and returns the data
    {
        return pi* radius * radius;
    }

    double getDiameter()// this calculates diameter based on input of radius from user and returns the data
    {
        return radius * 2;
    }

    double getCircumference() // this calculates circumference by using radius input and pi X2 and returns the data
    {
        return 2 * pi * radius;
    }
};

int main()
{
    //variable
    Circle circle = Circle();
    double radius;

    cout << "Please enter the circle's radius to calculate area, diameter, and circumference: " << endl; // the main prompt for the user to enter the circles radius
    cin >> radius;
    circle.setRadius(radius);//this displays the results of the calculation
    cout << "Area:" << circle.getArea() << endl;
    cout << "Diameter:" << circle.getDiameter() << endl;
    cout << "Circumference:" << circle.getCircumference() << endl;
    system("pause");
    return 0;