#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;  // Variable to store user's name

    cout << "Enter your name: ";
    getline(cin, name);  // Read full name including spaces

    cout << "Hello " << name;

    return 0;
}
