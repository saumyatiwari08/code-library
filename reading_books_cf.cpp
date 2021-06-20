#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int main() {

    ll n, k;
    cin >> n >> k;
    ll t[n], a[n], b[n];
    for(int i = 0; i < n; i++) cin >> t[i] >> a[i] >> b[i];
    int x=0, y=0;
    ll sum = 0;
    for(int i = 0; i <n; i++) {
        if(a[i]){
                x++;
                sum += t[i];

        }
        else if(b[i]) y++;
    }


}
