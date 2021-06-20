#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, e, x = 0, y = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> e;
            if(e % 2 != i % 2) {
                if(e % 2 == 0) {
                    x++;
                }else{
                   y++;
                }
            }
        }
        if (x != y) {
            cout << -1 <<endl;
        } else {
            cout << x << endl;
        }
    }

}
