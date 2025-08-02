//Create an array and accessing elementes of the array
#include<iostream>
using namespace std;
int main(){
    char grades[]={'A','B','C','F'};// This is an character array of name grades
    //access elemnets using index
    cout<<grades[0]<<"\n"; 
    cout<<grades[1]<<"\n";
    cout<<grades[2]<<"\n";
    cout<<grades[3]<<"\n"; 
    // now accessing elements using foreach loop
    for (char grade:grades) {
        cout<<grade<<"\n";
    }  
    return 0;

}