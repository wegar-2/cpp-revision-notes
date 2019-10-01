#ifndef POINT2D_HPP
#define POINT2D_HPP

class Point2D {
public:
    Point2D();
    Point2D(double value);
    Point2D(double x, double y);
    Point2D(const Point2D& rhs);
    ~Point2D();

    void SetX(double x);
    void SetY(double y);
    double GetX() const;
    double GetY() const;
    double GetDistanceFromOrigin() const;

    static unsigned int objsCounter;
    void PrintInfo() const;

    Point2D& operator=(const Point2D& rhs);
    const Point2D& operator++();
    const Point2D operator++(int flag);
    const Point2D& operator--();
    const Point2D operator--(int flag);
    Point2D operator+(const Point2D& rhs);
    Point2D operator-(const Point2D& rhs);



private:
    double* pX;
    double* pY;
    double privateGetDistanceFromOrigin() const;

};

#endif // POINT2D_HPP
