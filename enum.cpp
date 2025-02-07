#include <iostream>
using namespace std;

enum level{  //declaration of enum. enum is a list of constants
    low, //if we not assign values then the values will be automatically low =0
    medium, // mediumm =1
    high // high =2 and so on
};

int main(){
    enum level type = medium; // here type is the enum variable , and value to that variable should be from the list of constants specified in the enum
    cout<<type;
}

/*
lets see another case

enum level{  //declaration of enum. enum is a list of constants
    low = 5, //if we  assign value to low
    medium, // automatically mediumm = 6
    high // high = 7 and so on
};
*/