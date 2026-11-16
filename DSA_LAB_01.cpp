#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
    sum = num1 + num2;
    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;
    cout << "Sum = " << sum << endl;
    if (sum % 2 == 0)
    {
        cout << "The sum is Even." << endl;
    }
    else
    {
        cout << "The sum is Odd." << endl;
    }

    return 0;
}

