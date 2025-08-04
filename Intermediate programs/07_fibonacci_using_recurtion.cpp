//Fibonacci using recurtion
#include <iostream>
using namespace std;
int fib(int n){
    return (n<=1)?n:fib(n-1)+fib(n-2);
}
int main(){
    int n=5;
    cout<<"Enter your number:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }
    return 0;
}
