#include <iostream>
using namespace std;

// Function to print an array
void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int partition(int a[], int start, int end)
{
    int pivot = a[end]; // pivot element
    int i = start - 1;

    for (int j = start; j <= end - 1; j++)
    {
        // If the current element is smaller than the pivot
        if (a[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[end]);
    return i + 1;
}

/* Function to implement quick sort */
void quick(int a[], int start, int end)
{
    if (start < end)
    {
        int p = partition(a, start, end); // p is the partitioning index

        quick(a, start, p - 1);
        quick(a, p + 1, end);
    }
}

int main()
{

int arraySize;

    cout << "Enter the size of the array: ";
    cin >> arraySize;

    int a[arraySize];
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cin >> a[i];
    }

    cout << "The array elements are: ";
    for (int i = 0; i < arraySize; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // int a[] = {88, 22, 33, 11, 55, 77, 90, 40, 60, 99, 44};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Before sorting, array elements are:" << endl;
    printArr(a, n);

    quick(a, 0, n - 1);

    cout << "After sorting, array elements are:" << endl;
    printArr(a, n);

    return 0;
}
