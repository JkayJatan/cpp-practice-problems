/*
   1
  121
 12321
1234321
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        for (int j=0;j<=i;j++){
            cout<<j+1;
        }
        for (int j=i;j>0;j--){
            if (i!=0){
                cout<<j;
            }
        }
        cout<<"\n";
    }
    return 0;
}