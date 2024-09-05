# Exp-1-Introduction
# Aim
To learn about VS code and getting input from user and displaying it.
# Software Used
VS Code and c++ online compiler.
# Theory
These code examples illustrate fundamental programming concepts: a 'Hello World' program to test syntax and output, user input and display to handle interactions, and a basic calculator to perform and show arithmetic operations. Together, they provide a foundational understanding of output, input handling, and basic computations in programming.
# Program Code
```
//Print ‘Hello World’ program

#include <iostream>  
int main() {
    std::cout << "Hello, World!" << std::endl;  
    return 0;  
}
```
```
//Getting input from user and displaying it

#include <iostream>  
int main() {
    std::string name;  
    std::cout << "Enter your name: ";  
    std::cin >> name;  
    std::cout << "Hello, " << name << "!" << std::endl;  
    return 0;  
}
```
```
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
```
# Output
### Hello World
![image](https://github.com/user-attachments/assets/15f10e0a-a24b-4a01-944b-09a3ee7784d3)
### User Input and Output
![image](https://github.com/user-attachments/assets/2181ba09-20c5-4aec-9325-3ae0ebf7babb)
### Basic Calculator
![image](https://github.com/user-attachments/assets/59f8f393-25d6-4b46-8e1a-9d4ed4464814)

# Conclusion
We learnt how to use essential C++ syntax and functionality, such as input/output handling and basic computations.



