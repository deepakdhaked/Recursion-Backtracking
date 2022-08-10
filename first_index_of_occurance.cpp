#include <iostream>
#include <vector>
using namespace std;

int firstIndexoccur(int arr[], int index, int size, int key)
{
    if (index == size)
    {
        return -1;
    }

    if (arr[index] == key)
    {
        return index;
    }
    return firstIndexoccur(arr, index + 1, size, key);
}

int lastIndexOccur(int arr[], int index, int size, int key)
{
    if (index == size)
    {
        return -1;
    }
    int index_var = lastIndexOccur(arr, index + 1, size, key);
    if (index_var == -1 && arr[index] == key)
    {
        return index;
    }
    return index_var;
}

vector<int> allIndexOccur(int arr[], int index, int size, int key, int foundsofar)
{
    if (index == size)
    {
        vector<int> v(foundsofar);
        return v;
    }

    if (arr[index] == key)
    {
        vector<int> v = allIndexOccur(arr, index + 1, size, key, foundsofar + 1);
        v[foundsofar] = index;
        return v;
    }
    else
    {
        vector<int> v = allIndexOccur(arr, index + 1, size, key, foundsofar);
        return v;
    }
}

int main()
{
    int arr[] = {2, 3, 6, 9, 8, 3, 2, 8, 2, 4, 8, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << firstIndexoccur(arr, 0, size, 8);
    cout << '\n';
    cout << lastIndexOccur(arr, 0, size, 2);
    cout << '\n';
    vector<int> v = allIndexOccur(arr, 0, size, 2, 0);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
}
