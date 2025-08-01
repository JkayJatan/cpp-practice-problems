//Count no of digits in a number
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter a number:";
    cin>>n;
    while(n!=0){
        count++;
        n/=10;
    }
    cout<<"No of digits="<<count;
    return 0;
}