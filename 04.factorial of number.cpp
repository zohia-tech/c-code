include <iostream>   // Library used for input and output
using namespace std;  // Allows use of standard names without std::

int main() {
    int n;            // Variable to store the number entered by the user
    long fact = 1;    // Variable to store factorial result, initialized to 1

    cout << "Enter a number: "; // Ask the user to enter a number
    cin >> n;                  // Take input from the user

    // Loop to calculate factorial
    for (int i = 1; i <= n; i++) {
        fact *= i;             // Multiply fact by i
    }

    cout << "Factorial is: " << fact << endl; // Display the factorial result
    return 0;                 // End the program successfully
}
