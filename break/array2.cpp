#include <iostream>
using namespace std;
int main(){

    // to find the lowest age among the array of ages
    int ages[10]={20,22,86,75,90,19,67,82,45,19};
    int lowestage=ages[0];

    // loop through elements of array 
    for(int i:ages){
        if(lowestage>i){
            lowestage=i;
            cout<<"The lowest age is: "<<lowestage;
        }
        
    }
}