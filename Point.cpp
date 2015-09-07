#include "Point.h"
#include <cmath>
// Default constructor
// Initializes the point to (0.0, 0.0)
Point::Point() {
  x = 0.0;
  y = 0.0;
  z = 0.0;
}

// Constructor
// Initializes the point to (initX, initY)
Point::Point(double initX, double initY, double initZ) {
  x = initX;
  y = initY;
  z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
  // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX) {
  x = newX;
}

void Point::setY(double newY) {
  y = newY;
}

// Accessors
// Return the current values of private member variables
const double Point::getX() {
  return x;
}

const double Point::getY() {
  return y;
}
const double Point::getZ() {
  return z;
}
// Member functions
// Calculates the distance between two points
const double Point::distanceTo(Point & point){
  return sqrt(pow((point.getX()-x), 2) + pow((point.getY()-y),2) + pow((point.getZ()-z),2));

}
