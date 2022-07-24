#include<iostream>
using namespace std;

void fun(int n){
    // Time Complexity : O(n)
    // Space Complexity : O(n)
    if(n==0){
        return;
    }
    cout << "hello world\n";
    fun(n - 1);
}

void fun(int i,int n){
    // Time Complexity : O(n)
    // Space Complexity : O(n)
    if (i > n)
    {
        return;
    }
    cout << "hello world\n";
    fun(i + 1, n);
}

int main(){
    int n;
    n = 5;
    fun(n);
    cout << "-----------------------------\n";
    fun(1, n);
}