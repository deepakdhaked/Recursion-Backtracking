#include <iostream>
using namespace std;

void fun(int n)
{
    // Time Complexity : O(n)
    // Space Complexity : O(n)
    if (n == 0)
    {
        return;
    }
    cout << n << '\n';
    fun(n - 1);
    cout << n << '\n';
}

int main()
{
    int n = 5;
    fun(n);
}
