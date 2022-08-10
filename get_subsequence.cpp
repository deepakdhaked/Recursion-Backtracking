#include <iostream>
#include <vector>
using namespace std;

vector<string> getSubsequences(string s)
{
    if (s.size() == 0)
    {
        vector<string> x;
        x.push_back("");
        return x;
    }

    char ch = s[0];
    string sub = s.substr(1);
    vector<string> res = getSubsequences(sub);

    vector<string> v;
    for (int i = 0; i < res.size(); i++)
    {
        v.push_back("" + res[i]);
        v.push_back(ch + res[i]);
    }
    return v;
}

int main()
{
    string s = "abc";
    vector<string> v = getSubsequences(s);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\n';
    }
}
