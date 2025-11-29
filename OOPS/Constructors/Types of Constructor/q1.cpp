#include <iostream>
#include <cmath>
using namespace std;

class Point {
    int x, y;
public:
    Point(int a, int b) {
        x = a;
        y = b;
    }

    void displayPoint() {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }

    int getX() { return x; } // getter used to access private x outside class
    int getY() { return y; } // getter used to access private y outside class

    friend Point distance(Point p1, Point p2);
};

Point distance(Point p1, Point p2) {
    int x1 = p1.x - p2.x;
    int y1 = p1.y - p2.y;
    Point p3(sqrt(x1 * x1 + y1 * y1), 0);
    return p3;
}

int main() {
    Point p1(4, 5);
    p1.displayPoint();
    Point p2(6, 3);
    p2.displayPoint();
    Point p3 = distance(p1, p2);
    cout << "The distance between p1 and p2 is " << p3.getX() << endl;
    return 0;
}
