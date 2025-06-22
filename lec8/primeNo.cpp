#include<iostream>
using namespace std;

//1 -> prime 
// 0 -> not a prime

int isPrime (int n) {

    for(int i = 2 ; i<n ; i++) {
        if(n%i == 0)
        return 0;
    }
    return 1;
}

int main() {
    int n ;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    //function call
    if(isPrime(n)){
        cout<<"is a prime no"<<endl;
    }
    else {
        cout<<"not a prime no"<<endl;

    }
}