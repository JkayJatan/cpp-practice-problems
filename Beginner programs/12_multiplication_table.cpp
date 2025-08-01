// print Multiplication Table
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<" Multiplicaton Table of:";
    cin>>a;
    for (int i=1;i<=10;i++){
        cout<<a<<" X "<<i<<" = "<<a*i<<"\n";
    }
    return 0;
}