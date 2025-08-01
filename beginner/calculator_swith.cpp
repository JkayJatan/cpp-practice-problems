#include <iostream>
using namespace std;
int main(){
    char op;
    double a,b;
    cout<<"Select Operator(+ - * /):";
    cin>>op;
    cout<<"Enter num1:";
    cin>>a;
    cout<<"Enter num2:";
    cin>>b;
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