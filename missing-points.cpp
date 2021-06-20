#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
const int N = (int)1e6 + 100;
const long long INF = 9*(long long)(1e18);
const long double PI = 3.14159265358979323846;
#define fi first
#define se second
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define tc int t; cin >> t; while(t--)
#define fr(i,a,b) for(int i=a; i<=b; ++i)
#define rf(a,b,c) for(int i=a; a>=b; --i)
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";

int main() {

    tc {
        ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int n;
        cin >> n;
        n = (4 *n - 1);
        int x[n], y[n], xor1 = 0, xor2 = 0;
        fr(i, 0, n-1) {
            cin >> x[i] >> y[i];
            xor1 = xor1 ^ x[i];
            xor2 = xor2 ^ y[i];
        }
        cout << xor1 << " " << xor2 << "\n";
    }

    return 0;
}

