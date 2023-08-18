#include <iostream>
using namespace std;
int main()
{
    int num1, num2, sum, product;
    cout << "Press return after entering a number.\n";
    cout << "Enter the first number\n";
    cin >> num1;
    cout << "Enter the second number\n";
    cin >> num2;
    sum = num1 + num2;
    product = num1 * num2;
    cout << "num1: " << num1 << "\n";
    cout << "num2: " << num2 << "\n";
    cout << num1 << " + " << num2 << " = " << sum << "\n";
    cout << num1 << " * " << num2 << " = " << product << "\n";
    cout << "This is the end of the program.\n";
    return 0;
}