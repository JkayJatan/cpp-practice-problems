// Simple Calculator using switch case
#include <iostream>
using namespace std;
int main(){
    char op;
    double a,b;
    cout<<"Enter:";
    cin>> a >> op >> b; //input =2 + 8 or 6 * 7 ,(spaces are necessary)
    switch (op)
    {
    case '+': cout<<a<<"+"<<b<<"="<<a+b;
        break;
    case '-': cout<<a<<"-"<<b<<"="<<a-b;
        break;
    case '*': cout<<a<<"*"<<b<<"="<<a*b;
        break;
    case '/': cout<<a<<"/"<<b<<"="<<a/b;
        break;
    default:
        break;
    }
    return 0;
}