#include <iostream>
using namespace std;

void displayArrayReverse(int arr[], int index, int size)
{
    if (index == size)
    {
        return;
    }

    displayArrayReverse(arr, index + 1, size);
    cout << arr[index] << ' ';
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    displayArrayReverse(arr, 0, size);
}
