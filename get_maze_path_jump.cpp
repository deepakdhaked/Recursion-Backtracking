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

    vector<string> paths;
    for (int h = 1; h <= dc - sc; h++)
    {
        vector<string> hpaths = getPath(sr, sc + h, dr, dc);
        for (int i = 0; i < hpaths.size(); i++)
        {
            paths.push_back("h" + to_string(h) + hpaths[i]);
        }
    }

    for (int v = 1; v <= dr - sr; v++)
    {
        vector<string> vpaths = getPath(sr + v, sc, dr, dc);
        for (int i = 0; i < vpaths.size(); i++)
        {
            paths.push_back("v" + to_string(v) + vpaths[i]);
        }
    }

    for (int d = 1; d <= dc - sc && d <= dr - sr; d++)
    {
        vector<string> dpaths = getPath(sr + d, sc + d, dr, dc);
        for (int i = 0; i < dpaths.size(); i++)
        {
            paths.push_back("d" + to_string(d) + dpaths[i]);
        }
    }
    return paths;
}

int main()
{
    int n = 5, m = 5;
    vector<string> v = getPath(1, 1, n, m);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\n';
    }
}
