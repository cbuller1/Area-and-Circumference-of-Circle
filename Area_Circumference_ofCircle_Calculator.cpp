
//  Created by Cody Buller.
//
// THIS PROGRAM TAKES THE RADIUS FROM USER AND CALCULATES AREA & CIRCUMFERENCE
//
// I PASSED ALL VALUES IN THE FUNCTIONS BY REFERENCE, SINCE THE VARIABLES IN THE MAIN FUNCTION ARE LOCAL IN RELATION. I COULD HAVE MOVED THOSE VARIABLES AND MADE THEM GLOBAL FOR THE PROGRAM TO BE EASIER TO WRITE, BUT I DID NOT WANT TO HAVE THE WRONG ANSWER. I DID HOWEVER, MAKE PI A GLOBAL CONSTANT, SINCE IT WAS NOT YET DECLARED.
//
#include <iostream>
#include <cmath>
using namespace std;

// GLOBAL VARIABLES
    double const PI = 3.14159;
// FUNCTION FOREWARD DECLARATIONS
    double getRadius(double& rad);
    double findArea(double& rad);
    double findCircumference(double& rad);
// MAIN FUNCTION
int main()
{
 double radius;    //the radius of the circle
 double area;             //the area of the circle
 double circumference;    //the circumference of the circle
 
 //get the value of the radius from the user
 radius = getRadius(radius);
 
 //determine the area and circumference
 area = findArea(radius);
 circumference = findCircumference(radius);
 
 //output the results
 cout << "A circle of radius " << radius << " has an area of: " << area <<endl;
 cout << "and a circumference of: "<< circumference << endl;
 
 return 0;
}
// FUNCTION TO GET RADIUS FROM USER
double getRadius(double& rad)
{
    cout << "Please enter the radius of the circle: ";
    cin >> rad;
    return rad;
 }
// FUNCTION TO FIND AREA
double findArea(double& rad)
{
    double totalarea = PI * pow(rad, 2.0);
    return totalarea;
}
// FUNCTION TO FIND CIRCUMFERENCE
double findCircumference (double& rad)
{
    double circumf = 2 * PI * rad;
    return circumf;
}
