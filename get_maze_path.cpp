#include <iostream>
#include <vector>
using namespace std;

vector<string> getPath(int sr, int sc, int dr, int dc)
{
    if (sr == dr && sc == dc)
    {
        vector<string> x;
        x.push_back("");
        return x;
    }
    else if (sr > dr || sc > dc)
    {
        vector<string> x;
        return x;
    }

    vector<string> hpath = getPath(sr, sc + 1, dr, dc);
    vector<string> vpath = getPath(sr + 1, sc, dr, dc);

    vector<string> v;
    for (int i = 0; i < hpath.size(); i++)
    {
        v.push_back("h" + hpath[i]);
    }
    for (int i = 0; i < vpath.size(); i++)
    {
        v.push_back("v" + vpath[i]);
    }
    return v;
}

int main()
{
    int n = 3, m = 3;
    vector<string> v = getPath(1, 1, n, m);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\n';
    }
}
