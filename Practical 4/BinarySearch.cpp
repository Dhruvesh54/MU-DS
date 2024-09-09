#include <iostream>
using namespace std;

int sorted(int a[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return a[50];
}
int main()
{
    int i, arr[50], n, x, y;

    cout << "Enter the size of array:";
    cin >> n;

    cout << "Enter the elements in an array:";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sorted(arr, n);
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    int end = n - 1, beg = 0;
    cout << "\nEnter the elements to be found:";
    cin >> x;

    for (i = 0; i < n; i++)
    {
        int mid = (beg + end) / 2;

        if (arr[mid] == x)
        {
            cout << "The element is found at index:" << mid;
            break;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }
}

/*
int binarySearch(int arr[], int l, int r, int x);

int main()
{
    int arraySize;

    cout << "Enter the size of the array: ";
    cin >> arraySize;

    int array[arraySize];
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }

    cout << "The array elements are: ";
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    int x;
    cout << "Enter the value to search: ";
    cin >> x;

    int n = sizeof(array) / sizeof(array[0]);

    int result = binarySearch(array, 0, n - 1, x);

    if (result == -1)
        cout << "Not found" << endl;
    else
        cout << "Element is found at index: " << result << endl;

    return 0;
}

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}
*/
