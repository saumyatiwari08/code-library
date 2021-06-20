#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    ios :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
            ll n, k;
            cin >> n >> k;
            ll a[n], b[n];
            for(int i = 0; i < n; i++) {
                cin >> a[i];
                if(!(a[i] % k)) b[i] = 0;
                else b[i] = k - a[i] % k;
            }
            sort(b, b+n);
            ll c[n];
            c[0] = b[0];
            for(int i = 1; i < n; i++) {
                if(b[i] != 0 && b[i] == b[i-1]) c[i] = c[i-1] + k;
                else c[i] = b[i];
            }
            sort(c, c+n);
            if(c[n-1] > 0) c[n-1]++;
            cout << c[n-1] << endl;
    }

    return 0;
}
