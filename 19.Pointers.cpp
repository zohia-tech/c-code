#include <iostream>  // Include input-output library
using namespace std; // Use standard namespace

int main() {
    int num = 10;      // Declare an integer variable 'num' and assign 10
    int *ptr = &num;   // Declare a pointer 'ptr' and store the address of 'num'

    cout << "Value: " << num << endl;          // Print the value of 'num'
    cout << "Address: " << ptr << endl;        // Print the address of 'num' stored in pointer
    cout << "Value using pointer: " << *ptr;  // Dereference the pointer to get the value of 'num'

    return 0; // End the program
}
