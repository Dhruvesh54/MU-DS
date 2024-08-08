#include <iostream>
using namespace std;

int main()
{
    int arreaySize_input;
    
    cout << "Enter the size of array: " << endl;
    cin >> arreaySize_input;

    int arraySize = arreaySize_input;
    int array[arraySize + 1];
    int i;

    cout << "Enter the array elements: " << endl;
    for (i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }

    int position, element;
    cout << "Enter the position to insert the new element (0 to " << arraySize << "): ";
    cin >> position;
    cout << "Enter the element to insert: ";
    cin >> element;

    for (i = arraySize; i > position; i--)
    {
        array[i] = array[i - 1];
    }

    array[position] = element;
    arraySize++;

    cout << "The array elements after insertion are: ";
    for (i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
