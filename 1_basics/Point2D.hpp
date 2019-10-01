#ifndef POINT2D_HPP
#define POINT2D_HPP

class Point2D {
public:
    // constructors
    Point2D();
    Point2D(double value);
    Point2D(double x, double y);
    Point2D(const Point2D& rhs);
    // destructor
    ~Point2D();
    // class methods
    double GetX();
    double GetY();
    void SetX(double x);
    void SetY(double y);
    double GetDistanceFromOrigin();
private:
    double *pX;
    double *pY;
    double CalculateDistanceFromOrigin();
};

#endif // POINT2D_HPP
