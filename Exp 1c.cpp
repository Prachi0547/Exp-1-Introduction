//Basic Calculator Program

#include <iostream>
using namespace std;
int main() {
    float number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Addition: " << (number1 + number2) << endl;
    cout << "Subtraction: " << (number1 - number2) << endl;
    cout << "Multiplication: " << (number1 * number2) << endl;
    if (number2 != 0) {
        cout << "Division: " << (number1 / number2) << endl;
    } else {
        cout << "Division: Cannot divide by zero!" << endl;
    }
    return 0;
}
