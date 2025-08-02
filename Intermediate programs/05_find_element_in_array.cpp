//Find element in the array
#include<iostream>
using namespace std;
int main(){
    string fruits[6]={"apple","mango","banana","grapes","kivi","guava"};
    string fruit;int index=0;
    cout<<"Enter fruit name you want to search:";
    cin>>fruit;
    for (int i=0;i<6;i++){
        if (fruit==fruits[i]) index=i;
    }
    if (index!=0) cout<<fruit<<" is at index:"<<index;
    else cout<<fruit<<" not found in the array.";
    return 0;
}