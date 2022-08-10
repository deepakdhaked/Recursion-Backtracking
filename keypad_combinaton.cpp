#include <iostream>
#include <vector>
using namespace std;

string arr[] = {
    ".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

vector<string> getCombination(string str)
{
    if (str.size() == 0)
    {
        vector<string> x;
        x.push_back("");
        return x;
    }

    char ch = str[0];
    string substr = str.substr(1);
    vector<string> res = getCombination(substr);

    vector<string> v;
    string s = arr[ch - '0'];
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < res.size(); j++)
        {
            v.push_back(s[i] + res[j]);
        }
    }
    return v;
}

int main()
{
    string str = "678";
    vector<string> v = getCombination(str);
    for (int i = 0; i < v.size(); i++)
    {
        cout << i + 1 << " -> " << v[i] << '\n';
    }
}
