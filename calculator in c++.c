#include <iostream>
using namespace std;

int main()
{
    float num1, num2;#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation;

    cout << "Please enter two numbers: ";
    cin >> num1 >> num2;
#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation;

    cout << "Please enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Please enter an operation (+, -, *, /, %): ";
    cin >> operation;

    switch(operation) {
        case '+':
            cout << "The result is " << num1 + num2 << endl;
            break;
        case '-':
            cout << "The result is " << num1 - num2 << endl;
            break;
        case '*':
            cout << "The result is " << num1 * num2 << endl;
            break;
        case '/':
            cout << "The result is " << num1 / num2 << endl;
            break;
        case '%':
            cout << "The result is " << (int)num1 % (int)num2 << endl;
            break;
        default:
            cout << "That is not a valid operation!" << endl;
            break;
    }
    return 0;
