#include<iostream>
using namespace std;

int ap (int n) {
    int ap = 3*n + 7;
    return ap;
}

int main() {
    int n ;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    int ans = ap(n);
    cout<<"the ap is :"<<ans<<endl;


return 0;
}