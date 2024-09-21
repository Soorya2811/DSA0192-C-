#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;
    double height;

public:
    Rectangle(double l, double w, double h = 0) {
        length = l;
        width = w;
        height = h;
    }

    double area() {
        return length * width;
    }

    double volume() {
        return length * width * height;
    }
};

int main() {
    double l, w, h;
    
    cout << "Enter length and width of the rectangle: ";
    cin >> l >> w;
    
    cout << "Enter height for volume calculation (0 for 2D shape): ";
    cin >> h;
    
    Rectangle rect(l, w, h);

    cout << "Area of the rectangle: " << rect.area() << endl;

    if (h != 0) {
        cout << "Volume of the rectangle: " << rect.volume() << endl;
    } else {
        cout << "Volume calculation skipped as height is 0." << endl;
    }

    return 0;
}
