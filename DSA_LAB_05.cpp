#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n, searchElement;
    int found = -1;

    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "\nEnter element to search: ";
    cin >> searchElement;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == searchElement)
        {
            found = i;
            break;
        }
    }
    if (found != -1)
    {
        cout << "\nElement found at position: "
             << found + 1 << endl;
    }
    else
    {
        cout << "\nElement not found in the array." << endl;
    }

    return 0;
}

