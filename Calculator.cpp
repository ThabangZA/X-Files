#include <iostream>
using namespace std;

int main()
{
    int num1, num2, answer;
    char symbol;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter math symbol: ";
    cin >> symbol;
    cout << "Enter a second number: ";
    cin >> num2;

    if (symbol == '+')
    {
        answer = num1 + num2;
    }
    else if (symbol == '-')
    {
        answer = num1 - num2;
    }
    else if (symbol == '*')
    {
        answer = num1 * num2;
    }
    else if (symbol == '/')
    {
        answer = num1 / num2;
    }
    else
        cout << "Invalid symbol ";

    cout << answer;


    return 0;
}
