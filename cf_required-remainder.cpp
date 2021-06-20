/*You are given three integers x,y and n. Your task is to find the maximum integer k such that 0≤k≤n that k mod x=y, where mod is modulo operation. Many programming languages use percent operator % to implement it.

In other words, with given x,y and n you need to find the maximum possible integer from 0 to n that has the remainder y modulo x.

You have to answer t independent test cases. It is guaranteed that such k exists for each test case.*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

    ios :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll x, y, n;
        cin >> x >> y >> n;
        ll z = (n - y) % x;  //distance of k from upper bound
        cout << n - z <<endl;
    }
    return 0;
}
