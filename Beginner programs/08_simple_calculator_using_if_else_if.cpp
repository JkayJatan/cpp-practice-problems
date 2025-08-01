// Simple calculator using if , else-if coditions
#include <iostream>
using namespace std;
int main() {
    int a, b;
    char op;
    cout<<"Enter:";
    cin>> a >> op >> b; //input =2 + 8 or 6 * 7 ,(spaces are necessary)
    if (op == '+'){
        cout << a + b;}
    else if (op == '-'){
        cout << a - b;}
    else if (op == '*'){
        cout << a * b;}
    else if (op == '/'){
        cout << a / b;}
    else{
        cout << "Invalid";}
    return 0;
}
