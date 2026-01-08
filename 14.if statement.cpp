#include <iostream>  // Include input-output stream library
using namespace std; // Use standard namespace

int main() 
{
    int n1;          // First number
    cin >> n1;       // Take first number from user
    
    char op;         // Operator (+, -, *, /)
    cin >> op;       // Take operator from user
    
    int n2;          // Second number
    cin >> n2;       // Take second number from user
    
    // Perform operation based on operator
    if (op == '+')  
        cout << n1 + n2;   // Addition
        
    if (op == '-')  
        cout << n1 - n2;   // Subtraction
        
    if (op == '*')  
        cout << n1 * n2;   // Multiplication
        
    if (op == '/')  
        cout << n1 / n2;   // Division (integer division)
    
    return 0;  // End of program
}
