// COMSC-210 | Lab 7 | Christine Susic

#include <iostream>
using namespace std;

void* reverseArray(string []);
string* displayArray(string []);

//size of array
const int SIZE = 5;

int main() {
    //string pointer that points to new array
    string *ptr = nullptr;
    //new string array
    ptr = new string[SIZE];
    string names[SIZE] = {Frieda, Jane, Alfie, Leonard, Penny};
    
    reverseArray(ptr);
    displayArray(ptr);
    
    delete [] ptr; //delete array 
   
    return 0;
}

//recieves dynamic string array
//reverses the elements
//returns a pointer to modified array
void* reverseArray(string names[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    return arr;
};

//receive dynamic string array
//outputs elements
string* displayArray(string names[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    } 
};