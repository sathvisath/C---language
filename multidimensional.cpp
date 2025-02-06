#include <iostream>
using namespace std;

int main(){
    int array[2][2][2]={
    {
        {1,2},
        {4,5}
       },
        {
            {7,8},
            {10,11}
        }
    };
    cout<<array[1][0][1];
}