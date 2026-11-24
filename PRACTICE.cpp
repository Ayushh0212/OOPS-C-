//POINT DISTANCE:
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    float x;
    float y;

public:
    // Default constructor
    Point()
    {
        x = 0;
        y = 0;
    }

    // Constructor with one argument
    Point(float a)
    {
        x = a;
        y = a;
    }

    // Constructor with two arguments
    Point(float a, float b)
    {
        x = a;
        y = b;
    }

    // Display point
    void show()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    // Distance from origin
    float distanceFromOrigin()
    {
        return sqrt(x * x + y * y);
    }

    // Distance between two points
    float distanceBetween(Point p)
    {
        return sqrt((x - p.x) * (x - p.x) +
                    (y - p.y) * (y - p.y));
    }
};

int main()
{
    // Object 1 using default constructor
    Point p1;

    // Object 2 using one argument constructor
    Point p2(3);

    // Object 3 using two argument constructor
    Point p3(2, 7);

    cout << "Object 1: ";
    p1.show();

    cout << "Object 2: ";
    p2.show();

    cout << "Object 3: ";
    p3.show();

    cout << "\nDistance of Object 1 from origin: "
         << p1.distanceFromOrigin() << endl;

    cout << "Distance of Object 2 from origin: "
         << p2.distanceFromOrigin() << endl;

    cout << "Distance of Object 3 from origin: "
         << p3.distanceFromOrigin() << endl;

    cout << "\nDistance between Object 2 and Object 3: "
         << p2.distanceBetween(p3) << endl;

    return 0;
}
