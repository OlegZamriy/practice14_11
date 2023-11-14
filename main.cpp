#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    cout << "1. Minimum of two numbers\n";
    cout << "2. Maximum of two numbers\n";
    cout << "3. Square of the first number\n";
    cout << "4. Power of the first number to the second\n";
    cout << "5. Check the first number for evenness\n";
    cout << "6. Check the second number for oddness\n";
    cout << "Choose an operation (1-6): ";

    int choice;
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Minimum of " << num1 << " and " << num2 << ": " << MIN(num1, num2) << endl;
        break;
    case 2:
        cout << "Maximum of " << num1 << " and " << num2 << ": " << MAX(num1, num2) << endl;
        break;
    case 3:
        cout << "Square of " << num1 << ": " << SQUARE(num1) << endl;
        break;
    case 4:
        cout << num1 << " raised to the power of " << num2 << ": " << POWER(num1, num2) << endl;
        break;
    case 5:
        cout << num1 << " is even: " << IS_EVEN(num1) << endl;
        break;
    case 6:
        cout << num2 << " is odd: " << IS_ODD(num2) << endl;
        break;
    default:
        cout << "Invalid choice\n";
    }

    return 0;
}
