include <iostream>   // Library used for input and output
using namespace std;  // Allows use of standard names without std::

int main() {
    int a, b;         // Variables to store two numbers

    cout << "Enter two numbers: "; // Ask the user to enter two numbers
    cin >> a >> b;                // Take input for both numbers

    int sum = a + b;  // Calculate the sum of a and b
    cout << "Sum is: " << sum << endl; // Display the sum

    return 0;         // End the program successfully
}
