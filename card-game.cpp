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
#define tc ll t; cin >>t; while(t--)
#define fr(i,a,b) for(int i=a; i<=b; i++)
#define rf(a,b,c) for(int i=a; a>=b; i--)
#define yes cout << "YES" <<endl;
#define no cout << "NO" << endl;

int main() {

    ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    tc {
        ll N, chef = 0, morty = 0;
        cin >> N;
        while(N--) {
            ll x, y;
            cin >> x >> y;
            ll s1 = 0, s2 = 0;
            while(x) {
                s1 = s1 + (x%10);
                x /= 10;
            }
             while(y) {
                s2 = s2 + (y%10);
                y /= 10;
            }
            if(s1 == s2) {
                chef++;
                morty++;
            }
            else if (s1 > s2) chef++;
            else morty++;
        }
        if(chef == morty) cout << 2 << " " << chef << "\n";
        else if (chef> morty) cout << 0 << " " << chef<< "\n";
        else cout << 1 << " " << morty << "\n";
    }

    return 0;

}
