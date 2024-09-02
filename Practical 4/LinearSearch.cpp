#include <iostream>
using namespace std;

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

    // TODO: Function call
    int result = LinearSearch(array, arraySize, x);
    if (result == -1)
        cout << "Element is not present in the array" << endl;
    else
        cout << "Element is present at index " << result << endl;

    return 0;
}

int LinearSearch(int arr[], int N, int x)
{
    for (int i = 0; i <= N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
