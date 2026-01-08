#include <iostream>  // Header file for input and output
using namespace std; // Allows us to use cout and cin without std::

int main()
{
    // Loop for rows (runs 5 times)
    for (int i = 1; i <= 5; i++)
    {
        // Loop for columns (prints stars in each row)
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";  // Print star with space
        }

        cout << endl;  // Move to next line after each row
    }

    return 0;  // Program ends successfully
}
