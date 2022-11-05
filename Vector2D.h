
#pragma once

using namespace std;

class Vector2D
{
public:

    double x;
    double y;

    //default constructor
    Vector2D();

    //parameterized constructor:
    Vector2D(double in_x, double in_y);

    //overloaded operators:
    //declarations of multiplication operator
    friend const Vector2D operator * (const Vector2D& vector, double d);

    //declaration of division operator:
    friend const Vector2D operator / (const Vector2D& vector, double d);

    //declaration of stream output operator:
    friend ostream& operator << (ostream& os, Vector2D& vector);
};
