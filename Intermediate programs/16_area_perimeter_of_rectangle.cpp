#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        width = 0;
    }

    // Parameterized constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Function to calculate area
    double area() {
        return length * width;
    }

    // Function to calculate perimeter
    double perimeter() {
        return 2 * (length + width);
    }

    // Function to display results
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main() {
    // Using parameterized constructor
    Rectangle rect1(10, 5);
    rect1.display();

    cout << endl;

    // Using default constructor and then creating another rectangle
    Rectangle rect2;
    rect2 = Rectangle(7, 3); // assigning new values
    rect2.display();

    return 0;
}
