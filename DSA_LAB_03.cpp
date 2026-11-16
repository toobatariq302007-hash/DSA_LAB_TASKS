#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n, element, position;

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
    cout << "\n\nEnter element to insert: ";
    cin >> element;

    cout << "Enter position (1 to " << n + 1 << "): ";
    cin >> position;
    if (position < 1 || position > n + 1 || n >= 100)
    {
        cout << "Invalid position or array is full!";
        return 0;
    }
    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = element;
    n++;
    cout << "\nUpdated Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

