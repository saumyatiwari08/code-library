#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int t=1;
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >>y2;
        int x3, y3, x4, y4;
        cin >> x3 >> y3 >> x4 >> y4;
        int a1 = max(x1, x3), b1 = max(y1, y3);
        int a2 = min(x2, x4), b2 = min(y2, y4);
        int ari = 0;
        if(a1<=a2 && b1<=b2) {
            ari = (a2 - a1) * (b2 - b1);
        }
        int ar1 = (x2 - x1) * (y2 - y1);
        int ar2 = (x4 - x3) * (y4 - y3);
        cout << ari << " " << ar1 + ar2 - ari << "\n";
    }
    return 0;
}

1
