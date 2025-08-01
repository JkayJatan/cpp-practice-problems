//Check palindrome number
#include<iostream>
using namespace std;
int main(){
    int x,temp,rev=0;
    cout<<"Enter a Number:";
    cin>>x;
    temp=x;
    while (x!=0){
        rev*=10;
        rev+=x%10;
        x/=10;
    }
    if (temp==rev){
        cout<<"It is a Palindrome Number.";
    }else{
        cout<<"It is not a Palindrome Number.";
    }
    return 0;
}
