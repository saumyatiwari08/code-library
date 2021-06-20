///706B Interesting drink using an STL function upper_bound
///Time complexity is O(log(last - first)) + O(1)  i.e. O(log(n)) + O(1)
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
        int n, q;
        cin >> n;
        int a[n];
        fr(i, 0, n-1) cin >> a[i];
        cin >> q;
        sort(a, a+n);
        int b;
        int ans;
        fr(i, 0, q-1) {
            cin >> b;
            ans = upper_bound(a, a+n, b) - a;
            cout << ans << "\n";
        }
}
