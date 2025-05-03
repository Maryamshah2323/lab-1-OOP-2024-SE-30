#include <iostream>
#include"calculator.h"
using namespace std;


int main() {
    Calculator calc;
    int choice;
    // Set the numbers in the calculator
    calc.setNumbers();
    // Display operation choices
    cout << "Choose an operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice (1-4): ";
    cin >>choice;
    // Perform the chosen operation
    switch (choice) {
        case 1:
            cout << "Result: " << calc.add() << endl;
            break;
        case 2:
            cout << "Result: " << calc.subtract() << endl;
            break;
        case 3:
            cout << "Result: " << calc.multiply() << endl;
            break;
        case 4:
            cout << "Result: " << calc.divide() << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
