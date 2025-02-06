#include <iostream>
#include <string.h>
using namespace std;

//named structure means we will give a name to our structure when declaring so we can use the structure anywhhere in the code

struct cars{ //giving name while declaring
    int year;
    string brand;
}; //here we no need to give variables while creating a structure
 
int main(){
    cars car1; //creating a new structure variable by using structure name
    car1.year = 1998;
    car1.brand = "Ferrari";

    cars car2; //creating second structure variable
    car2.year = 1887;
    car2.brand = "BMW";

    cout<<car1.year<<"\n";
    cout<<car1.brand<<"\n";

    cout<<car2.year<<"\n";
    cout<<car2.brand<<"\n";

}
