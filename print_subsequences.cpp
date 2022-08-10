#include <iostream>
using namespace std;

void printSubsequences(string s, string ans)
{

    if (s.length() == 0)
    {
        cout << ans << '\n';
        return;
    }

    char ch = s[0];
    string substr = s.substr(1);

    printSubsequences(substr, ans + "");
    printSubsequences(substr, ans + ch);
}

int main()
{
    string s = "abc";
    printSubsequences(s, "");
}
