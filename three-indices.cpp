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
#define tc ll t; cin >>t; while(t--)
#define fr(i,a,b) for(int i=a; i<=b; i++)
#define rf(a,b,c) for(int i=a; a>=b; i--)
#define yes cout << "YES" <<"\n";
#define no cout << "NO" << "\n"

int main() {

    ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    tc {
        int n;
        cin >> n;
        int a[n];
        fr(i, 0, n - 1) cin >> a[i];
        int i = 0, j = 1, k = 2, flag = 0;
        while(k < n) {
                if(a[i] < a[j] && a[j] > a[k] ) {
                    flag = 1;
                    break;
                }
                i++; j++; k++;
        }
        if(flag){
                yes
                cout << i + 1 << " " << j + 1 << " " << k + 1 << "\n";
        }
        else no;
    }

    return 0;
}
