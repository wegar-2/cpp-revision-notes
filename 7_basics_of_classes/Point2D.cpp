#include <iostream>
#include <cmath>
#include "Point2D.hpp"

using namespace std;


/* ========================================================================== */
/* =====================   CONSTRUCTORS AND DESTRUCTOR  ===================== */
/* ========================================================================== */

Point2D::Point2D() {
    pX = new double(1.0);
    pY = new double(2.0);
    Point2D::objsCounter++;
}

Point2D::Point2D(double value) {
    pX = new double(value);
    pY = new double(value);
    Point2D::objsCounter++;
}

Point2D::Point2D(double x, double y) {
    pX = new double(x);
    pY = new double(y);
    Point2D::objsCounter++;
}

Point2D::Point2D(const Point2D& rhs) {
    pX = new double(rhs.GetX());
    pY = new double(rhs.GetY());
    Point2D::objsCounter++;
}

Point2D::~Point2D() {
    cout << "Class Point2D destructor has been called..." << endl;
    delete pX;
    delete pY;
    pX = nullptr;
    pY = nullptr;
    Point2D::objsCounter--;
}



/* ========================================================================== */
/* =====================      SETTERS AND GETTERS       ===================== */
/* ========================================================================== */

void Point2D::SetX(double x) {
    *pX = x;
}

void Point2D::SetY(double y) {
    *pY = y;
}

double Point2D::GetX() const {
    return *pX;
}

double Point2D::GetY() const {
    return *pX;
}

double Point2D::privateGetDistanceFromOrigin() const {
    return sqrt(pow(*pX, 2) + pow(*pY, 2));
}

double Point2D::GetDistanceFromOrigin() const {
    return privateGetDistanceFromOrigin();
}



/* ========================================================================== */
/* =====================      OTHER FUNCTIONS       ========================= */
/* ========================================================================== */

unsigned int Point2D::objsCounter = 0;

void Point2D::PrintInfo() const {
    cout << "X coordinate: " << *pX << endl;
    cout << "Y coordinate: " << *pY << endl;
    cout << "Count of objects of Point2D class: " << Point2D::objsCounter << endl;
}



/* ========================================================================== */
/* ===================      OPERATORS OVERLOADING       ===================== */
/* ========================================================================== */

Point2D& Point2D::operator=(const Point2D& rhs) {
    cout << "Assignment operator of the Point2D class running..." << endl;
    /* check for self-assignment */
    if (this == &rhs) {
        cout << "Self-assignment detected..." << endl;
        return *this;
    } else {
        *pX = rhs.GetX();
        *pY = rhs.GetY();
        return *this;
    }

}

const Point2D& Point2D::operator++() {
    *pX = *pX + 1.0;
    *pY = *pY + 1.0;
    return *this;
}

const Point2D Point2D::operator++(int flag) {
    Point2D temp = Point2D(*this);
    *pX = *pX + 1.0;
    *pY = *pY + 1.0;
    return temp;
}

const Point2D& Point2D::operator--() {
    *pX = *pX - 1.0;
    *pY = *pY - 1.0;
    return *this;
}

const Point2D Point2D::operator--(int flag) {
    Point2D temp = Point2D(*this);
    *pX = *pX - 1.0;
    *pY = *pY - 1.0;
    return temp;
}

Point2D Point2D::operator+(const Point2D& rhs) {
    return Point2D(this->GetX() + rhs.GetX(),
                   this->GetY() + rhs.GetY());
}

Point2D Point2D::operator-(const Point2D& rhs) {
    return Point2D(this->GetX() + rhs.GetX(),
                   this->GetY() + rhs.GetY());
}
