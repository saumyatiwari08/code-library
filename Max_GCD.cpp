#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int32_t main() {

    IOS;
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        if (n == 1) {
            cout << 1 << "\n";
        }
        else {
            cout << n/2 << "\n";
        }
    }
    return 0;
}
