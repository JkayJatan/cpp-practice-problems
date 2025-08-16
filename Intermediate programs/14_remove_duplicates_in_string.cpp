//Remove duplicates in a string without using extra space
#include <iostream>
using namespace std;

string removeDuplicates(string str) {
    int n = str.length();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (str[i] == str[j]) {
                for (int k = j; k < n - 1; k++) {
                    str[k] = str[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }
    str.resize(n);
    return str;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "After removing duplicates: " << removeDuplicates(s) << endl;
    return 0;
}
