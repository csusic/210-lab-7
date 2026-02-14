// COMSC-210 | Lab 7 | Christine Susic

#include <iostream>
using namespace std;

string* displayArray(string []);
void reverseArray(string []);

//size of array
const int SIZE = 5;

int main() {
    //names array
    string names[SIZE] = {"Frieda", "Jane", "Alfie", "Leonard", "Penny"};
    //string pointer that points to names array
    string *ptr = nullptr;
    ptr = names;
    
    displayArray(ptr);
    reverseArray(ptr);
    
    //delete [] ptr; //delete array 
   
    return 0;
}

//receive dynamic string array
//outputs elements
string* displayArray(string arr[SIZE]) {
    cout << "Original array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    } 
    cout << endl;
    return arr;
}

//recieves dynamic string array
//reverses the elements
//returns a pointer to modified array
void reverseArray(string arr[SIZE]) {
    cout << "Reversed array: ";
    for (int i = 0; i < SIZE/2; i++) {
        swap(arr[i], arr[SIZE]);
    }
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
}