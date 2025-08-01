//Check largest of two numbers
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter num1:";
    cin>>num1;
    cout<<"Enter num2:";
    cin>>num2;
    if (num1>num2){
        cout<<"num1 is the largest!";
    }else if(num1<num2){
        cout<<"num2 is the largest!";
    }else{
        cout<<"Both are equal!";
    }
    return 0;
    }
