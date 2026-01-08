#include <iostream>  // Include input-output library
using namespace std; // Use standard namespace

int main()
{
    int n;  // Variable to store the number
    cout << "Enter n: ";  // Ask user to enter a number
    cin >> n;  // Read number from user

    // Ternary (conditional) operator
    // (condition) ? value_if_true : value_if_false;
    (n % 2 == 0) ? cout << "Even" : cout << "Odd";

    return 0;  // End of program
}
