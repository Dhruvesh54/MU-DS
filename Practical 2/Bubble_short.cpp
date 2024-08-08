// #include <iostream>
// using namespace std;

// void swap(int *xp, int *yp)
// {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }

// /* Function to print an array */
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// // A function to implement bubble sort
// void bubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         cout << "Pass-" << i + 1 << endl;
//         // Last i elements are already in place
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(&arr[j], &arr[j + 1]);
//             }
//             printArray(arr, n);
//         }
//     }
// }

// // Driver program to test above functions
// int main()
// {
//     int arreaySize_input;

//     cout << "Enter the size of array: " << endl;
//     cin >> arreaySize_input;

//     int array[arreaySize_input];
//     int i;
//     cout << "Enter the array elements " << endl;
//     for (i = 0; i < arreaySize_input; i++)
//     {
//         cin >> array[i];
//     }

//     cout << "The array elements are: ";
//     int n;
//     int arr;
//     for (i = 0; i < arreaySize_input; i++)
//     {
//         arr = array[i];
//         n = sizeof(array) / sizeof(array[i]);
//     }
//     bubbleSort(array, n);
//     cout << "Sorted array: " << endl;
//     printArray(array, n);
//     cout << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
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

    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}
