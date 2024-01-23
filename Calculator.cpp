#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Input the operation to perform
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Perform the selected operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        default:
            cout << "Error: Invalid operation.\n";
            break;
    }

    return 0;
}

