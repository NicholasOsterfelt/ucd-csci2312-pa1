//
// Created by Nick Osterfelt on 9/5/15.
//
#include <cmath>
#include <iostream>
#include "Point.h"
#include <iomanip>
using namespace std;

double computeArea(Point &a, Point &b, Point &c);
int main(void) {


    Point a(0,2,4), b(0,2,4), c(1,3,2);        //declares points a,b, and c

    cout << fixed << setprecision(2) << "The area of the triangle is: " << computeArea(a, b, c);

    return 0;
}

double computeArea(Point &a, Point &b, Point &c){
    double ab = a.distanceTo(b);            //uses distanceTo function of point to calculate distances of triangle
    double bc = b.distanceTo(c);
    double ca = c.distanceTo(a);
    return .25*(sqrt((ab+bc+ca)*(bc+ca-ab)*(ab-bc+ca)*(ab+bc-ca))); //uses Heron's Formula to calculate area of triangle

}
// Computes the area of the triangle created by 3 points.

