#include <iostream>
#include <string.h>
using namespace std;

int main(){

    //structure is where we can store same related variables using a structure name
    //variables in structure are known as members 

    struct{  //declaring a structure
        int myNum;
        int Integer;
        string Name;
    }Structure; //structure name

    //accesing the structure using '.' syntax , we access the variables in structure using the structure name

    Structure.myNum = 4; //declaring values for values in a structure
    Structure.Integer = 10;
    Structure.Name = "Lakshmi Sathvika";

    cout<<Structure.myNum<<"\n\n";
    cout<<Structure.Integer<<"\n\n";
    cout<<Structure.Name<<"\n";




}