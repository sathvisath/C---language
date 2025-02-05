#include <iostream>
using namespace std;
int main(){
    bool ships[4][4]={
        {0,1,0,1},
        {0,0,1,0},
        {1,0,0,0},
        {0,0,0,1}
    };
    int hits=0;
    int numberofturns=0;
    while(hits<5){
        int row,column;

        // selecting coordinates
        cout<<"Selecting coordinates.\n";

        //ask user row number
        cout<<"Enter the row number: ";
        cin>>row;

        //ask user column number
        cout<<"Enter the column number: ";
        cin>>column;
        // we take ships data type as bool so we will check with if condition
        if(ships[row][column]){
            ships[row][column]=0;
            hits++;
            cout<<"Still"<<(4-hits)<<"left.\n";
        }else{
            cout<<"You missed!";
        }

        numberofturns++;
    }
    cout<<"You won!!!";
    cout<<"You won in"<<numberofturns<<".";
}
