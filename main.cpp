#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    int num1, num2, choice;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose an operation:\n";
    cout << "1. Find Min\n";
    cout << "2. Find Max\n";
    cout << "3. Square\n";
    cout << "4. Power\n";
    cout << "5. Check Even\n";
    cout << "6. Check Odd\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Min: " << MathOperations::findMin(num1, num2) << "\n";
        break;
    case 2:
        cout << "Max: " << MathOperations::findMax(num1, num2) << "\n";
        break;
    case 3:
        cout << "Square of " << num1 << ": " << MathOperations::square(num1) << "\n";
        cout << "Square of " << num2 << ": " << MathOperations::square(num2) << "\n";
        break;
    case 4:
        int exponent;
        cout << "Enter the exponent: ";
        cin >> exponent;
        cout << "Power of " << num1 << ": " << MathOperations::power(num1, exponent) << "\n";
        cout << "Power of " << num2 << ": " << MathOperations::power(num2, exponent) << "\n";
        break;
    case 5:
        cout << num1 << " is " << (MathOperations::isEven(num1) ? "even" : "odd") << "\n";
        cout << num2 << " is " << (MathOperations::isEven(num2) ? "even" : "odd") << "\n";
        break;
    case 6:
        cout << num1 << " is " << (MathOperations::isOdd(num1) ? "odd" : "even") << "\n";
        cout << num2 << " is " << (MathOperations::isOdd(num2) ? "odd" : "even") << "\n";
        break;
    default:
        cout << "Invalid choice\n";
    }

    return 0;
}
