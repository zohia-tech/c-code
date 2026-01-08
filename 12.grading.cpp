#include <iostream>  // Include the input-output library
using namespace std; // Use the standard namespace

int main()
{
    int marks;  // Variable to store user's marks
    cout << "Enter marks: ";  // Ask the user to input marks
    cin >> marks;  // Read marks from the user

    // Check if marks are between 81 and 100
    if (marks >= 81 && marks <= 100) {
        cout << "Very Good";  // Output "Very Good"
    }
    // Check if marks are between 61 and 80
    else if (marks >= 61 && marks <= 80) {
        cout << "Good";  // Output "Good"
    }
    // Check if marks are between 41 and 60
    else if (marks >= 41 && marks <= 60) {
        cout << "Average";  // Output "Average"
    }
    // If marks are 40 or below
    else {
        cout << "Fail";  // Output "Fail"
    }

    return 0;  // End of program
}
