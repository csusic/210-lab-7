// COMSC-210 | Lab 7 | Christine Susic

#include <iostream>
using namespace std;

void reverseArray(string []);
string* displayArray(string []);

//size of array
const int SIZE = 5;

int main() {
    //names array
    string names[SIZE] = {"Frieda", "Jane", "Alfie", "Leonard", "Penny"};
    //string pointer that points to names array
    string *ptr = nullptr;
    ptr = names;
    
    //Original array output
    cout << "Original array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
    cout << "Reversed array: ";
    
    //reverseArray(ptr);
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
//outputs elements
string* displayArray(string arr[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    } 
    return arr;
}