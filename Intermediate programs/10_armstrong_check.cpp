//Check armstrong number using user defined function
#include <iostream>
#include <cmath>
using namespace std;
bool isArm(int n){
    int temp=n,sum=0,d=0;
    int x=n;
    //count digits
    while(x){
        d++;
        x/=10;}
    x=n;
    //sum of each digit to the power of d
    while(x){
        sum+=(pow(x%10,d));
        x/=10;}
    return sum==temp;
}
int main(){
    int n;
    cout<<"Enter your number:";
    cin>>n;
    cout<<(isArm(n)?"Armstrong":"Not Armstrong");
    return 0;
}
