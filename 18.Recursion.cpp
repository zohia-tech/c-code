#include <iostream>  // Include input-output library
using namespace std; // Use standard namespace

// Function to calculate factorial recursively
int factorial(int n) {
    if (n == 1)        // Base case: factorial of 1 is 1
        return 1;
    else
        return n * factorial(n - 1); // Recursive call: n * factorial(n-1)
}

int main() {
    int num = 5; // Number for which factorial is calculated

    // Call the factorial function and display the result
    cout << "Factorial of " << num << " is: " << factorial(num);

    return 0; // Program ends successfully
}
