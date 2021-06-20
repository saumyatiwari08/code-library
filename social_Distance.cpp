#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, a = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        
        if(s[0] == '0') {
            a++;
        }

        for (int i = k+1; i < n; i += k + 1) {
            if (s[i] == '0') {
                a++;
            }

        }
        cout << a;

    }
}