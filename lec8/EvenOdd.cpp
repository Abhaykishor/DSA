#include<iostream>
using namespace std;


//1->Even
//0-> odd
bool isEven(int a) {
    if(a&1) {
        return 0;
    } else {
        return 1;
    }
}

int main() {

    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    if(isEven(num)){
        cout<<"number is Even"<<endl;
    }
    else {
        cout<<"number is odd"<<endl;
    }
    return 0;
}