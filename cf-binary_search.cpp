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
#define rf(i,b,c) for(int i=a; a>=b; --i)
#define yes cout << "YES" << "\n";
#define no cout << "NO" << "\n";

int main() {
        ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        tc{
            int n;
            cin >> n;
            int a[n];
            fr(i, 0, n-1) cin >> a[i];
            set <ll> s (a, a+n);
            map <ll, ll> m;
            fr(i, 0, n-1) m[a[i]]++;
            int res = s.size();

            int max_val = 0;
            for(auto it = m.begin(); it != m.end(); it++) {
                    if(it -> se > max_val) max_val = it -> se;
            }

            if(res == max_val) cout << max_val - 1 << "\n";
            else if(res > max_val) cout << max_val << "\n";
            else cout << res << "\n";
        }
        return 0;
}
