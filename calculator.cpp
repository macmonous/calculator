#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

void showMenu() {
    cout << "Calculator\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n";
    cout << "4. Division\n5. Power\n6. Square Root\n";
    cout << "7. Logarithm\n8. Sine\n9. Cosine\n10. Tangent\n";
    cout << "0. Exit\n";
    cout << "Choose an option: ";
}

void performCalculation(int choice) {
    double a, b;
    switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << a + b << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << a - b << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << a * b << endl;
            break;
        case 4:
            cout << "Enter numerator and denominator: ";
            cin >> a >> b;
            if (b == 0) throw runtime_error("Division by zero error!");
            cout << "Result: " << a / b << endl;
            break;
        case 5:
            cout << "Enter base and exponent: ";
            cin >> a >> b;
            cout << "Result: " << pow(a, b) << endl;
            break;
        case 6:
            cout << "Enter a number: ";
            cin >> a;
            if (a < 0) throw runtime_error("Square root of negative number!");
            cout << "Result: " << sqrt(a) << endl;
            break;
        case 7:
            cout << "Enter a number: ";
            cin >> a;
            if (a <= 0) throw runtime_error("Logarithm of non-positive number!");
            cout << "Result: " << log(a) << endl;
            break;
        case 8:
            cout << "Enter an angle (in radians): ";
            cin >> a;
            cout << "Result: " << sin(a) << endl;
            break;
        case 9:
            cout << "Enter an angle (in radians): ";
            cin >> a;
            cout << "Result: " << cos(a) << endl;
            break;
        case 10:
            cout << "Enter an angle (in radians): ";
            cin >> a;
            cout << "Result: " << tan(a) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;
        if (choice == 0) break;
        try {
            performCalculation(choice);
        } catch (exception &e) {
            cout << "Error: " << e.what() << endl;
        }
        cout << endl;
    } while (choice != 0);
    cout << "Goodbye!" << endl;
    return 0;
}

