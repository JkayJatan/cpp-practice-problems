#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter num1:";
    cin>>num1;
    cout<<"Enter num2:";
    cin>>num2;
    if (num1>num2){
        cout<<"num1 is greatest!";
    }else if(num1<num2){
        cout<<"num2 is greatest!";
    }else{
        cout<<"Both are equal!";
    }

    return 0;
    }
