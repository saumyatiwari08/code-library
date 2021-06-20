#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a+n);
        int candies = 0, cost = 0;
        for (int i = 0; i < n; ++i) {
            cost += a[i];
            if(cost > s) {
                break;
            }
            candies++;
        }
        cout << candies << "\n";
    }
    return 0;
}