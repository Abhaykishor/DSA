#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout<<"the value of n is "<<n<<endl;
}

int main () {

    int n ;
    cin>>n;
    dummy(n);
    cout<<"N is "<<n <<endl;
    return 0;
}