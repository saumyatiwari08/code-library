///#537 B Creative Snap
///Divide and Conquer
///Time Complexity : O(n*log(n))

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

ll n, k, A, B;
vector <ll> vec;

ll minm(ll l, ll r) {
    ll low = lower_bound(vec.begin(), vec.end(), l) - vec.begin();   // find the lower index and upper index of avenger array for the given base to calculate no. of avengers
    ll high = upper_bound(vec.begin(), vec.end(), r) - vec.begin() - 1;

    ll aveng = high - low + 1;  // number of avengers

    ll consumed_pow = aveng == 0 ? A : B * aveng * (r - l + 1);  // consumed power = 0 if no. of avengers = 0 or B*aveng*baselength
    if(l == r || aveng == 0) return consumed_pow;  // no recursion if the l == r i.e. the base can't be divided further or number of avengers is 0

    ll mid = l + r >> 1;  = 2
    ll min_pow = min(consumed_pow, minm(l, mid) + minm(mid+1, r));  //find min power between power to destroy the whole base and total power when base is divided into two
    return min_pow;
}

int main() {
    ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k >> A >> B;
    ll x;
    fr(i, 0, k - 1) {
        cin >> x;
        vec.pb(x);
    }
    ll len = ll(1) << n;
    sort(vec.begin(), vec.end());
    cout << minm(1, len) << "\n";   // low is 1 but not 0 because it the position point on the base
    return 0;
}
