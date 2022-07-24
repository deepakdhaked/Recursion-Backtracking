#include <iostream>
#include <string.h>
using namespace std;

void towerofHanoi(int n, char t1, char t2, char t3)
{
    if (n == 0)
    {
        return;
    }

    towerofHanoi(n - 1, t1, t3, t2);
    cout << "disk " << n << " [" << t1 << " -> " << t2 << "]" << endl;
    towerofHanoi(n - 1, t3, t2, t1);
}

int main()
{
    int n = 3;
    char t1 = 'A';
    char t2 = 'B';
    char t3 = 'C';
    towerofHanoi(n, t1, t2, t3);
}
