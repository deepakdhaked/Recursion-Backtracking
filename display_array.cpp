#include <iostream>
using namespace std;

void displayArray(int arr[], int size)
{
    if (size < 0)
    {
        return;
    }

    displayArray(arr, size - 1);
    cout << arr[size] << ' ';
}
void displayArray1(int arr[], int index, int size)
{
    if (index == size)
    {
        return;
    }
    cout << arr[index] << ' ';
    displayArray1(arr, index + 1, size);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    displayArray(arr, size - 1);
    cout << '\n';
    displayArray1(arr, 0, size);
}
