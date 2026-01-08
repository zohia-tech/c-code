#include <iostream>  // Include input-output library
using namespace std; // Use the standard namespace

int main() {
    int n;  // Variable to store size of the array
    
    // Ask user for the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n]; // Declare 1D array of size n

    // Input elements into the array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Read each element from user
    }

    // Print all elements of the array
    cout << "The array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Print each element
    }
    cout << endl;

    // Calculate sum of all elements in the array
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];  // Add each element to sum
    }
    cout << "Sum of array elements: " << sum << endl;  // Display sum

    return 0;  // Program ends successfully
}

