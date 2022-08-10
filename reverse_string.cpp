#include <iostream>
using namespace std;

string reverse(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string substr = s.substr(1);
    string res = reverse(substr);
    return res + ch;
}

int main()
{
    string s = "binod";
    string result = reverse(s);
    cout << result;
}
