#include <iostream>
#include <vector>
using namespace std;

vector<string> getPath(int n)
{
    if (n == 0)
    {
        vector<string> x;
        x.push_back("");
        return x;
    }
    else if (n < 0)
    {
        vector<string> x;
        return x;
    }

    vector<string> p1 = getPath(n - 1);
    vector<string> p2 = getPath(n - 2);
    vector<string> p3 = getPath(n - 3);

    vector<string> v;
    for (int i = 0; i < p1.size(); i++)
    {
        v.push_back("1" + p1[i]);
    }
    for (int i = 0; i < p2.size(); i++)
    {
        v.push_back("2" + p2[i]);
    }
    for (int i = 0; i < p3.size(); i++)
    {
        v.push_back("3" + p3[i]);
    }
    return v;
}

int main()
{
    int n = 4;
    vector<string> v = getPath(n);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\n';
    }
}
