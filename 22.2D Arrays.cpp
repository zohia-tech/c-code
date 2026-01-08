#include <iostream>  // Include the library for input/output
using namespace std; // Use the standard namespace

int main() {
    // Declare and initialize a 2x2 matrix
    int matrix[2][2] = {{1, 2}, {3, 4}};

    // Loop through each row
    for(int i = 0; i < 2; i++) {
        // Loop through each column in the current row
        for(int j = 0; j < 2; j++) {
            cout << matrix[i][j] << " "; // Print the element with a space
        }
        cout << endl; // Move to the next line after each row
    }

    return 0; // Program ends successfully
}
