//Sum of two numbers by user defined functions
#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int main() {
    int x, y;
    cout<<"Enter num1:";
    cin >> x;
    cout<<"Enter num2:";
    cin >> y;
    cout << "Sum = " << add(x, y);
}
