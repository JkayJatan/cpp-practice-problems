//Arithmetic operations with two numbers
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter num1:";
    cin>>num1;
    cout<<"Enter num2:";
    cin>>num2;
    cout<<"Addition="<<num1+num2;
    cout<<"\nSubtraction="<<num1-num2; // Here we are using \n , which is a new line character.
    cout<<"\nMultiplication="<<num1*num2;
    cout<<"\nDivision="<<num1/num2;
    cout<<"\nRemainder="<<num1 % num2;
    return 0;
    }