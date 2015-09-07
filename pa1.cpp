//
// Created by Nick Osterfelt on 9/5/15.
//
#include <cmath>
#include <iostream>
#include "Point.h"
#include <iomanip>
using namespace std;
        //function prototypes
double computeArea(Point &a, Point &b, Point &c);

int main(void) {
    double input;
    Point a(0,0,0), b(0,0,0), c(0,0,0);        //initializes points a,b, and c

        //Iterates through loop to prompt user to enter point coordinates
    cout << "Please enter the x,y and z coordinates respectivly for point a" << endl;
    for(int n = 0; n < 3; n++)
    {

        cin >> input;
        if(n == 0)
            a.setX(input);
        if(n == 1)
            a.setY(input);
        if(n == 2)
            a.setZ(input);
    }
    cout << "Please enter the x,y and z coordinates respectivly for point b" << endl;
    for(int n = 0; n < 3; n++)
    {

        cin >> input;
        if(n == 0)
            b.setX(input);
        if(n == 1)
            b.setY(input);
        if(n == 2)
            b.setZ(input);
    }
    cout << "Please enter the x,y and z coordinates respectivly for point c" << endl;
    for(int n = 0; n < 3; n++)
    {
        cin >> input;
        if(n == 0)
            c.setX(input);
        if(n == 1)
            c.setY(input);
        if(n == 2)
            c.setZ(input);
    }

        //outputs the area of the triangle created by the 3 points
    cout << fixed << setprecision(2) << "The area of the triangle is: " << computeArea(a, b, c);
    cin >> input;
    return 0;
}

double computeArea(Point &a, Point &b, Point &c){
    double ab = a.distanceTo(b);            //uses distanceTo function of point to calculate distances of triangle
    double bc = b.distanceTo(c);
    double ca = c.distanceTo(a);
    return .25*(sqrt((ab+bc+ca)*(bc+ca-ab)*(ab-bc+ca)*(ab+bc-ca))); //uses Heron's Formula to calculate area of triangle

}
