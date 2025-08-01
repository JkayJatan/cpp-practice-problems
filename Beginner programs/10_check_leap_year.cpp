//check leap year
#include <iostream>
using namespace std;
int main() {
    int year;
    cout<<"Enter year you want to check:";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){ // These are the conditions to check a leap year
        cout << "Leap Year.";}
    else{
        cout << "Not Leap Year.";}
    return 0;
}
