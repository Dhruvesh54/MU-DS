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

    for (i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}
