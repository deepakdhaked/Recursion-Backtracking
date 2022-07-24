#include <iostream>
using namespace std;

int maxArray(int arr[], int index, int size)
{
    if (index == size - 1)
    {
        return arr[index];
    }
    int max = maxArray(arr, index + 1, size);
    return arr[index] > max ? arr[index] : max;
}

int main()
{
    int arr[] = {22, 19, 33, 4, 7, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "max of array is : " << maxArray(arr, 0, size);
}
