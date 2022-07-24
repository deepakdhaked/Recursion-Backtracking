#include<iostream>
using namespace std;

void fun(int n){
    // Time Complexity : O(n)
    // Space Complexity : O(n)
    if (n==0)
    {
        return;
    }
    fun(n - 1);
    cout << n << '\n';
    // This is printed in backtracking of the recursion tree.
}

int main(){
    int n = 5;
    fun(n);
}