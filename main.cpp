// COMSC-210 | Lab 7 | Christine Susic

#include <iostream>
using namespace std;

void reverseArray();
string displayArray();

//size of array
const int SIZE = 5;

int main() {
    //string pointer that points to new array
    string *ptr = nullptr;
    //new string array
    ptr = new string[SIZE];
    
    delete [] ptr; //delete array 
   
    return 0;
}

//recieves dynamic string array
//reverses the elements
//returns a pointer to modified array
void reverseArray();

//receive dynamic string array
//outputs elements
string displayArray();




