#include <iostream>

using namespace std;

int addTwoNumbers(int num1, int num2) {
    int added = num1 + num2;

    return added;
}

int subtractOneNumFromAnother(int num1, int num2) {
    int subtract = num1 - num2;

    return subtract;
}

int main() {
    cout << "Please enter an integer: " << endl;

    int firstNumber {};
    cin >> firstNumber;

    cout << "Please enter another integer: " << endl;
    int secondNumber {};
    cin >> secondNumber;

    cout << firstNumber << " + " << secondNumber << " is " << addTwoNumbers(firstNumber, secondNumber) << endl;
    cout << firstNumber << " - " << secondNumber << " is " << subtractOneNumFromAnother(firstNumber, secondNumber) << endl;


    return 0;
}
