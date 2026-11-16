#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n, searchElement;

    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter elements in sorted order:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "\nEnter element to search: ";
    cin >> searchElement;
    int low = 0;
    int high = n - 1;
    int found = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == searchElement)
        {
            found = mid;
            break;
        }
        else if (arr[mid] < searchElement)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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

