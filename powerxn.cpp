#include <iostream>
using namespace std;

int fun(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    return x * fun(x, n - 1);
}

int fun2(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 != 0)
    {
        return fun2(x, n / 2) * fun2(x, n / 2) * x;
    }
    return fun2(x, n / 2) * fun2(x, n / 2);
}

int main()
{
    int x = 2, n = 5;
    cout << fun2(x, n);
}
