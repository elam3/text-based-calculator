#include <iostream>
#include <math.h>
using namespace std;

void displayMenu();
void chooseOperation(int);
void doAddition();
void doSubtraction();
void doMultiplication();
void doDivision();
void doPower();
void doSquareRoot();
void doABS();
void doFloor();
void doCeiling();
void doFactorial();

int main() {
    int opcode;
    char again;
    
    do {
        displayMenu();

        cout << "\nWhat would you like to do? ";
        cin >> opcode;

        chooseOperation(opcode);

        cout << "\n\nWould you like to go again? (y/n) ";
        cin >> again;
    } while (again != 'n' && again != 'N');

    return 0;
}





void chooseOperation(int opcode) {
        switch (opcode) {
            case 1:
                doAddition();
                break;
            case 2:
                doSubtraction();
                break;
            case 3:
                doMultiplication();
                break;
            case 4:
                doDivision();
                break;
            case 5:
                doPower();
                break;
            case 6:
                doSquareRoot();
                break;
            case 7:
                doABS();
                break;
            case 8:
                doFloor();
                break;
            case 9:
                doCeiling();
                break;
            case 10:
                doFactorial();
                break;
            default:
                cout << "Unrecognized operator. Please choose an operation from the menu and enter its respective number." << endl;
        }
}





void displayMenu() {
    // Display Menu
    cout << "\n\n=== Scientific Calculator ===\n\n" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Power" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. ABS" << endl;
    cout << "8. Floor" << endl;
    cout << "9. Ceiling" << endl;
    cout << "10. Factorial" << endl;
}





void doAddition() {
    double op1, op2;
    cout << "Please enter two numbers: ";
    cin >> op1 >> op2;
    cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
}





void doSubtraction() {
    double op1, op2;
    cout << "Please enter two numbers: ";
    cin >> op1 >> op2;
    cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
}





void doMultiplication() {
    double op1, op2;
    cout << "Please enter two numbers: ";
    cin >> op1 >> op2;
    cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
}





void doDivision() {
    double op1, op2;
    cout << "Please enter two numbers: ";
    cin >> op1 >> op2;
    if (op2 == 0)
        cout << "Error: Division by zero." << endl;
    else
        cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
}





void doPower() {
    double val, exp;
    cout << "Please enter a value: ";
    cin >> val;
    cout << "Please enter an exponent: ";
    cin >> exp;
    cout << val << "^" << exp << " = " << pow(val, exp) << endl;
}





void doSquareRoot() {
    double op;
    cout << "Please enter a value: ";
    cin >> op;
    cout << "Square Root of " << op << ": " << sqrt(op) << endl;
}





void doABS() {
    double op;
    cout << "Please enter a value: ";
    cin >> op;
    cout << "The absolute value of " << op << " is: " << abs(op) << endl;
}





void doFloor() {
    double op;
    cout << "Please enter a value: ";
    cin >> op;
    cout << "The floor of " << op << " is: " << floor(op) << endl;
}





void doCeiling() {
    ;
}





void doFactorial() {
    ;
}
