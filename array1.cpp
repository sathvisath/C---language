#include <iostream>
using namespace std;
int main(){
    int ages[6]={20,30,46,53,19,62};
    float avg,sum=0;

    // to get the size or length of the array
    int length = sizeof(ages)/sizeof(ages[0]);

    //loop through the array to get the sum of all elements in the array
    for(int i:ages){
        sum+=i;
    }

    avg=sum/length;
    cout<<"The average age is: "<<avg;

}