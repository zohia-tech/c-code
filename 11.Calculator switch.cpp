#include <iostream>  // Include input-output library
using namespace std; // Use standard namespace

int main() 
{
    int n1, n2;   // Variables to store two numbers
    char op;      // Variable to store the operator (+, -, *, /)

    // Take input from the user
    cin >> n1;    // First number
    cin >> op;    // Operator
    cin >> n2;    // Second number

    // Perform calculation based on operator using switch
    switch(op)
    {
        case '+':  // Addition
            cout << n1 + n2 << endl;
            break;
        case '-':  // Subtraction
            cout << n1 - n2 << endl;
            break;
        case '*':  // Multiplication
            cout << n1 * n2 << endl;
            break;
        case '/':  // Division
            if(n2 != 0)                  // Check for division by zero
                cout << n1 / n2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:   // Invalid operator
            cout << "Invalid operator!" << endl;
    }

    return 0; // End program
}
