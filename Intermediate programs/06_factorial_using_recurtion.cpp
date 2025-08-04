// Find factorial of a number using recursion
#include <iostream>
using namespace std;
int fact(int n){return (n<=1)?1:n*fact(n-1);}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Factorial="<<fact(n);
    return 0;
}
