#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
const int N = (int)1e6 + 100;
const long long INF = 9*(long long)(1e18);
const long double PI = 3.14159265358979323846;
#define fi first
#define se second
#define pab push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mi map<int,int>
#define ml map<ll,ll>
#define mp make_pair
#define tc int t; cin >>t; while(t--)
#define fr(i,a,b) for(int i=a; i<=b; i++)
#define rf(a,b,c) for(int i=a; a>=b; i--)
#define yes cout << "YES" <<"\n";
#define no cout << "NO" << "\n"

int main() {

    ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    tc {
       string s;
       cin>>s;
       int n = s.size();
       int c1= 0, c2 = 0, c3 = 0;
        fr(i, 0, n- 1)
        {
            if(s[i] == 'R') c1++;
            if(s[i] == 'P') c2++;
            if(s[i] == 'S') c3++;
        }
        if(c1 >= max(c2, c3)) cout << string(n, 'P') << "\n";
        else if(c2 >= max(c1, c3)) cout<<string(n, 'S') << "\n";
        else cout << string(n, 'R') << "\n";
    }

    return 0;
}
