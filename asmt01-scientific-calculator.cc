#include <iostream>
using namespace std;

int main() {
    int op1, op2, opcode;
    
    // Menu
    cout << "Scientific Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    /*cout << "5. Power" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. ABS" << endl;
    cout << "8. Floor" << endl;
    cout << "9. Ceiling" << endl;
    cout << "10. Factorial" << endl; */

    cout << "What would you like to do? (Please enter an integer): ";
    cin >> opcode;

    switch (opcode) {
        case 1:
            cout << "doAddition()" << endl;
            break; 
            break;
        case 3:
            cout << "doMultiplication()" << endl;
            break;
        case 4:
            cout << "doDivision()" << endl;
            break;
        default:
            cout << "Unrecognized operator. Please choose an operation from the menu and enter its respective number." << endl;
    }

    /*cout << "Please enter the first operand: ";
    cin >> op1;
    cout << "Please enter the second operand: ";
    cin >> op2;*/
    return 0;
}
