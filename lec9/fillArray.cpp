#include<iostream>
using namespace std;

int main() {
    int array[100];

    //To initialize the array with value'1'.
    fill_n(array, 100, 1);

    //To check the array input (kewaal 5 hi kari h print)
    for(int i = 0; i < 5; i++){
        cout << array[i] << " ";
    }

}
// This is one of the method and the 'for loop' can also be used
// but it is does not looks good and professional.