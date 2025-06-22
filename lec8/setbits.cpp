#include<iostream>
using namespace std;


int setbits(int n) {

    int count = 0;
    while (n!=0){
        if(n&1) {
            count++;
        }
        n=n>>1;
    }
    return count;
}


int main() {

    int a,b;
    cout<<"Enter the value of a and b : "<<endl;
    cin>>a>>b;
    int forA = setbits(a);
    int forB = setbits(b);
    int forT = forA + forB;

    cout<<"the total set bits are: "<<forT<<endl;

    return 0;
}