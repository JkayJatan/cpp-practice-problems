/*
1
21
321
4321
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}