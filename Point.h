// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __point_h
#define __point_h

class Point {

private:
    double x;
    double y;
    double z;
public:
    // Constructors
    Point();                                 // default constructor
    Point(double x, double y, double z);    // 3-argument constructor
    // Destructor
    ~Point();

    //Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);
    // Accessor methods
    const double getX();
    const double getY();
    const double getZ();
    //Member functions
    const double distanceTo(Point &);
};

#endif // __point_h
