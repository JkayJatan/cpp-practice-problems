//Reverse a number 
#include<iostream>
using namespace std;
int main(){
    int x,rev=0;
    cout<<"Enter a Number:";
    cin>>x;
    while (x!=0){
        rev*=10;
        rev+=x%10;
        x/=10;
    }
    cout<<"Reverse="<<rev;
    return 0;
}
