#include <iostream>

using namespace std;

int main()
{
    int firstNum, secondNum;
    char op;

    cout << "What operator did you use? " ;
    cin >> op;

    cout << "Enter a First Number: ";
    cin >> firstNum;

    cout << "Enter a Second Number: ";
    cin >> secondNum;


    if (op == '+'){

    cout << "The sum of two numbers is: " << firstNum + secondNum << endl;

    }

    else if (op == '-') {

    cout << "The Difference of two numbers is: " << firstNum - secondNum << endl;

    }

    else if (op == '*') {

    cout << "The Product of two numbers is: " << firstNum * secondNum << endl;

    }

    else if (op == '/') {

    cout << "The Quotient of two number is: " << firstNum / secondNum << endl;

    }

    else if (op == '%') {

    cout << "The Modulo of two numbers is: " << firstNum % secondNum << endl;

     }

     else {
        cout << "Unavailable Operator, Cannot compute the Two Numbers, Sorry :( " << endl;

    }

    return 0;
}
