///Educational Round 65 B. Lost numbers
///NOTE: Always use cout.flush() and endl in interactive programs.

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

int a[6] = {4, 8, 15, 16, 23, 42};
int query[4];

int main() {
    fr(i, 0, 3) {
        cout << "? " << i + 1 << " " << i + 2 << endl;
        cout.flush();
        cin >> query[i];
    }

    do {
        int flag = 1;
        fr(i, 0, 3) {
            if(a[i] * a[i+1] != query[i]){
              flag = 0;
              break;
            }
        }
        if(flag)
            break;
    } while(next_permutation(a, a+6));

    cout<< "!";
    fr(i, 0, 5)
        cout << " " << a[i];
    cout << endl;
    cout.flush();
    return 0;
}
