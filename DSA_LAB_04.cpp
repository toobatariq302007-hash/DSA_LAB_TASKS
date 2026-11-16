#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n, position;

    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "\nOriginal Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\nEnter position to delete (1 to " << n << "): ";
    cin >> position;
    if (position < 1 || position > n)
    {
        cout << "Invalid position!";
        return 0;
    }
    for (int i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "\nUpdated Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

