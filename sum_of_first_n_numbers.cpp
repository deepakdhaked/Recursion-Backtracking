#include <iostream>
using namespace std;

int fun(int n)
{
    // Time Complexity : O(n)
    // Space Complexity : O(n)
    if (n == 0)
    {
        return 0;
    }

    int sum = n + fun(n - 1);
    return sum;
}

int main()
{
    int n = 5;
    int sum = fun(n);
    cout << "Sum of first " << n << " numbers is : " << sum;
}
