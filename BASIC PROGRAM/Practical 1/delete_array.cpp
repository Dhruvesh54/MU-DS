#include <iostream>
using namespace std;

int main()
{
    int arreaySize_input;

    cout << "Enter the size of array: " << endl;
    cin >> arreaySize_input;

    int arraySize = arreaySize_input;
    int array[arraySize];
    int i;

    cout << "Enter the array elements: " << endl;
    for (i = 0; i < arraySize; i++)
    {
        // Read elements into the array
        cin >> array[i];
    }

    int position;
    cout << "Enter the position of the element to delete (0 to " << arraySize - 1 << "): ";
    cin >> position;

    if (position < 0 || position >= arraySize)
    {
        cout << "Invalid position!" << endl;
    }
    else
    {

        // Shift left
        for (i = position; i < arraySize - 1; i++)
        {
            array[i] = array[i + 1];
        }
        arraySize--;

        // Update array
        cout << "The array elements after deletion are: ";
        for (i = 0; i < arraySize; i++)
        {
            cout << array[i] << ",";
        }
        cout << endl;
    }

    return 0;
}

/*
#include <iostream>
using namespace std;

int main()
{
    int arraySize;

    cout << "Enter the size of the array: ";
    cin >> arraySize;

    int array[arraySize];
    int i;

    cout << "Enter the array elements: ";
    for (i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }

    int value;
    cout << "Enter the value of the element to delete: ";
    cin >> value;

    // Find the position of the value to delete
    int position = -1;
    for (i = 0; i < arraySize; i++)
    {
        if (array[i] == value)
        {
            position = i;
            break;
        }
    }

    if (position == -1)
    {
        cout << "Value not found in the array!" << endl;
    }
    else
    {
        // Shift elements to the left to fill the gap
        for (i = position; i < arraySize - 1; i++)
        {
            array[i] = array[i + 1];
        }
        arraySize--; // Decrease the size of the array

        // Print the updated array
        cout << "The array elements after deletion are: ";
        for (i = 0; i < arraySize; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    return 0;
}*/

/*
#include <iostream>
using namespace std;

int main()
{
    int arraySize;

    cout << "Enter the size of the array: ";
    cin >> arraySize;

    int array[arraySize];
    int i;

    cout << "Enter the array elements: ";
    for (i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }

    int value;
    cout << "Enter the value of the element to delete: ";
    cin >> value;

    // Find the position of the value to delete
    int position = -1;
    for (i = 0; i < arraySize; i++)
    {
        if (value==array[i])
        {
            position = i;
            break;
        }
    }

    if (position == -1)
    {
        cout << "Value not found in the array!" << endl;
    }
    else
    {
        // Shift elements to the left to fill the gap
        for (i = position; i < arraySize - 1; i++)
        {
            array[i] = array[i + 1];
        }
        arraySize--;

        // Print the updated array
        cout << "The array elements after deletion are: ";
        for (i = 0; i < arraySize; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/
