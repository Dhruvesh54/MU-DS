#include <iostream>
using namespace std;
int main()
{
    int rows, columns, ele, count = 0;
    cout << "Enter the number of rows and columns:";
    cin >> rows >> columns;
    int arr[rows][columns];
    ele = (rows * columns) / 2;

    cout << "Enter the elements in the array:";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count > ele)
    {
        cout << "It is a Sparse Matrix";
    }
    else
    {
        cout << "Not a Sparse Matrix";
    }
    return 0;
}