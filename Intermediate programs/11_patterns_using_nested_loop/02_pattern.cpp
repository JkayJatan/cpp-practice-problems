
/*
123
456
789
*/
#include<iostream>
using namespace std;
int main(){
    int n,num=1;
    cout<<"Enter n:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }
    return 0;
}