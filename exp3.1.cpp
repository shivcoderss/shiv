#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        int var = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > var)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = var;
    }
    cout << "\nArray after sorting:" << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int array[] = {9, 45, 23, 71, 80, 55};
    cout << "Array before sorting:" << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << array[i] << " ";
    }
    int size = 6;
    insertionSort(array, size);
}
