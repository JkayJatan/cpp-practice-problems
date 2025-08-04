// Sum of digits using recurtion
#include <iostream>
using namespace std;
int sumDigits(int n){
    return (n==0)?0:(n%10)+sumDigits(n/10);
}
int main(){
    int n;
    cout<<"Enter your number:";
    cin>>n;
    cout<<"Sum="<<sumDigits(n);
    return 0;
}
