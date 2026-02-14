// COMSC-210 | Lab 7 | Christine Susic

#include <iostream>
#include <string>
using namespace std;

void reverseArray(string []);
string* displayArray(string []);

//size of array
const int SIZE = 5;

int main() {
    //string pointer that points to names array
    string *ptr = nullptr;
    ptr = new string[SIZE];
    //names array
    ptr[0] = "Frieda"; 
    ptr[1] = "Jane"; 
    ptr[2] = "Alfie"; 
    ptr[3] = "Leonard"; 
    ptr[4] = "Penny";
    
    //Original array output
    cout << "Original array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
    //Reversed array
    cout << "Reversed array: ";
    
    reverseArray(ptr);
    displayArray(ptr);

    //delete [] ptr; //delete array
   
    return 0;
}

//recieves dynamic string array
//reverses the elements
//returns a pointer to modified array
void reverseArray(string arr[SIZE]) {
    for (int i = 0; i < SIZE/2; i++) {
        swap(arr[i], arr[SIZE - i - 1]);
    }
}

//receive dynamic string array
//outputs reversed array elements
string* displayArray(string arr[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    } 
    return arr;
}