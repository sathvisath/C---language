#include <iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter the value: ";
    cin>>i;
    for(i=1;i<=2;i++){
        cout<<"Week"<<i<<"\n";
        for(int j=0;j<=7;j++){
            cout<<" Day "<<j<<"\n";
        }
    }

}