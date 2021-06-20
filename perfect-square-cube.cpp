If x is a divisor of N, then for x to be the square root of N, it has to be equal to N/x. Either x ≤ √N or N/x ≤ √N. So we iterate from 1 to √N to check if N is a perfect square. Similarly for checking if N is a perfect cube, we iterate from 1 to cube root(N).

Time Complexity per test case: O(√N)

We can also solve this using the builtin function, sqrt() and cbrt() but you need to keep in mind that the return type is double for sqrt() and cbrt(). So you have to first typecase it to int.

Time Complexity per test case: O(1)

 

Code 1: Without builtin function

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int q, n;
        cin >> q >> n;
        if(q==1) {
            bool is_perf_sq = 0;
            for (int i = 1; i*i <= n; ++i) {
                if(i*i == n) {
                    is_perf_sq = 1;
                }
            }
            if(is_perf_sq) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
        else {
            bool is_perf_cube = 0;
            for (int i = 1; i*i*i <= n; ++i) {
                if(i*i*i == n) {
                    is_perf_cube = 1;
                }
            }
            if(is_perf_cube) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}