#include <iostream>
using namespace std;
int main()
{
    int i, arr[50], n, j, current;

    cout << "Enter the size of array:";
    cin >> n;

    cout << "Enter the elements in an array:";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 1; i < n; i++)
    {
        current = arr[i];
        j = i - 1;

        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}
