#include <iostream>
using namespace std;

int main()
{
    int arraySize = 4;
    int array[arraySize];
    int i;
    cout << "Enter the array elements " << endl;
    for (i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }
    
    cout << "The array elements are: ";
    for (i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}