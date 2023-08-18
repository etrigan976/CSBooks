#include <iostream>
using namespace std;
int main()
{
    int quarters, dimes, nickels, cents;
    quarters = 0;
    dimes = 0;
    nickels = 0;
    cents = 0;
    cout << "quarters are 25 cents\n";
    cout << "dimes are 10 cents\n";
    cout << "nickels are 5 cents\n";
    cout << "Enter the number of quarters:\t";
    cin >> quarters;
    cout << "Enter the number of dimes:\t";
    cin >> dimes;
    cout << "Enter the number of nickels:\t";
    cin >> nickels;
    cout << "you have " << quarters << " quarters\n";
    cout << "you have " << dimes << " dimes\n";
    cout << "you have " << nickels << " nickels\n";
    cents = (quarters * 25) + (dimes * 10) + (nickels * 5);
    cout << "you have a total of " << cents << " cents\n";
    return 0;
}