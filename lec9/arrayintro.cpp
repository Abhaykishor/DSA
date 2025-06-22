#include<iostream>
using namespace std;

void printArray(int arr[], int size) {

    cout<<endl<<"printing the array"<<endl;
    for (int i = 0; i<size ; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Printing done"<<endl;
}

int main() {

    //declaration
    int number[15];

    //accessing the array
    cout<<"Value at 0 index "<<number[0]<<endl;


    //cout<<"Value at 20 index "<<number[20]<<endl;

    int second[3]={5,7,11};

    //accessing a element
    cout<<"Value at 2 index "<<second[2]<<endl;


    int third[15]={2,7};
    cout<<"Value at 0 index "<<third[0]<<endl;


    //printing a array
    int n=15;

    cout<<"printing a array"<<endl;


    // printArray(third,15);

    int thirdSize = sizeof(third)/sizeof(int);
    cout<<"the size of third is "<<thirdSize<<endl;


    //initializing all locations with 0
    int fourth[10]={0};
    n=10;

    cout<<endl<<"printing the fourth array"<<endl;

    // printArray(fourth,10);

    //initializing all locations with 1(not possible with these lines)
    int fifth[10]={1};
    n=10;

    cout<<endl<<"printing the fifth array"<<endl;

    // printArray(fifth,10);


    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<"the size of fifth is "<<fifthSize<<endl;


    char ch[5]={'a','c', 'd','k','i'};
    cout<<endl<<"printing the array"<<endl;
    for (int i = 0; i<5 ; i++) {
        cout<<ch[i]<<" ";
    }

    cout<<endl<<"Printing done"<<endl;


    cout<<endl<<"Everything is Fine"<<endl;

    return 0;
}