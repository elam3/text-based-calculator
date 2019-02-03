#include <iostream>
#include <math.h>
#include <cstdlib>  // exit(int)
using namespace std;





void showMenu();
void callOperation(const int, double&, double&, double&);
void doAddition(double&, double&, double&);
void doSubtraction(double&, double&, double&);
void doMultiplication(double&, double&, double&);
void doDivision(double&, double&, double&);
void doPower(double&, double&, double&);
void doSquareRoot(double&, double&);
void doABS(double&, double&);
void doFloor(double&, double&);
void doCeiling(double&, double&);
void doFactorial(double&);





int main() {
    do {
        int opcode; //operation code, i.e. which operation to do based on showMenu()
        do {
            showMenu();
            cout << "\nWhat would you like to do? ";
            cin >> opcode;
            double op1, //operand 1
                   op2, //operand 2
                   res; //result of operation
            callOperation(opcode, op1, op2, res);
        } while (opcode < 0 || opcode > 10);
    } while (true);
    return 0;
}





//precondition: opcode is bound on range [0,10] by main's do-while()
void callOperation(const int opcode, double& op1, double& op2, double& res) {
        switch (opcode) {
            case 0:
                exit(0);
            case 1:
                doAddition(op1, op2, res);
                break;
            case 2:
                doSubtraction(op1, op2, res);
                break;
            case 3:
                doMultiplication(op1, op2, res);
                break;
            case 4:
                doDivision(op1, op2, res);
                break;
            case 5:
                doPower(op1, op2, res);
                break;
            case 6:
                doSquareRoot(op1, res);
                break;
            case 7:
                doABS(op1, res);
                break;
            case 8:
                doFloor(op1, res);
                break;
            case 9:
                doCeiling(op1, res);
                break;
            case 10:
                doFactorial(op1);
                break;
            default:
                ;
        }
}





void showMenu() {
    cout << "\n\n=== Scientific Calculator ===\n\n" << endl;
    cout << "0. QUIT" << endl;
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





void doAddition(double& op1, double& op2, double& res) {
    cout << "Please enter two numbers: ";
    cin >> op1 >> op2;
    res = op1 + op2;
    cout << op1 << " + " << op2 << " = " << res << endl;
}





void doSubtraction(double& op1, double& op2, double& res) {
    cout << "Please enter two numbers: ";
    cin >> op1 >> op2;
    res = op1 - op2;
    cout << op1 << " - " << op2 << " = " << res << endl;
}





void doMultiplication(double& op1, double& op2, double& res) {
    cout << "Please enter two numbers: ";
    cin >> op1 >> op2;
    res = op1 * op2;
    cout << op1 << " * " << op2 << " = " << res << endl;
}





void doDivision(double &op1, double &op2, double &res) {
    cout << "Please enter two numbers: ";
    cin >> op1 >> op2;
    if (op2 == 0)
        cout << "Error: Division by zero." << endl;
    else {
        res = op1 / op2;
        cout << op1 << " / " << op2 << " = " << res << endl;
    }
}





void doPower(double &val, double &exp, double &res) {
    cout << "Please enter a value: ";
    cin >> val;
    cout << "Please enter an exponent: ";
    cin >> exp;
    res = pow(val, exp);
    cout << val << "^" << exp << " = " << res << endl;
}





void doSquareRoot(double &op, double &res) {
    cout << "Please enter a value: ";
    cin >> op;
    res = sqrt(op);
    cout << "Square Root of " << op << ": " << res << endl;
}





void doABS(double &op, double &res) {
    cout << "Please enter a value: ";
    cin >> op;
    res = abs(op);
    cout << "The absolute value of " << op << " is: " << res << endl;
}





void doFloor(double &op, double &res) {
    cout << "Please enter a value: ";
    cin >> op;
    res = floor(op);
    cout << "The floor of " << op << " is: " << res << endl;
}





void doCeiling(double &op, double &res) {
    cout << "Please enter a value: ";
    cin >> op;
    res = ceil(op);
    cout << "The ceiling of " << op << " is: " << res << endl;
}





void doFactorial(double &op) {
    long res = 1;
    cout << "Please enter a positive integer value: ";
    cin >> op;
    if (op < 0) {
        cout << "Error: cannot compute factorial of negative numbers." << endl;
    } else if (op == 1 || op == 0) {
        res = 1;
    } else {
        //assert res > 1;
        int tmp = op;
        while (tmp > 1) {
            res *= tmp--;
        }
    }
    cout << op << "! = " << res << endl;
}
