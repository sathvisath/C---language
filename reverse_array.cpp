#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[1]);
    int left = 0; // here we should not give arr[0] because we are not assigning the value but the index in the array.
    int right = n-1;

    while(left<right){
        // swapping numbers until the left >= right.
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left ++;
        right --;
    }
    cout<<"The reversed array is: ";
    for (int i : arr){
        cout<<i << " ";
    }
    
    
}