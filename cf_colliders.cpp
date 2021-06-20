#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
const int N = (int)1e6 + 100;
const long long INF = 9*(long long)(1e18);
const long double PI = 3.14159265358979323846;
#define fi first
#define sec second
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mi map<int,int>
#define ml map<ll,ll>
#define mp make_pair
#define tc int t; cin >>t; while(t--)
#define fr(i,a,b) for(int i=a; i<=b; ++i)
#define rf(a,b,c) for(int i=a; a>=b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define endl "\n"


void sieve( vector<int> is_prime, int n)     // Sieve of Eratosthenes
{
    is_prime[0] = is_prime[1] = 0;
    for (ll i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= n; j += i)
                is_prime[j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m; cin >> n >> m;
    vector<int> is_prime(n+1,1);
    sieve(is_prime, n);
    vector<pii> v;
    int checkone = 0;
    fr(i, 2, n) if(is_prime[i]) v.pb(mp(i,0));
    while(m--)
    {
        char c; int x;
        cin >> c >> x;
        if(c == '-')
        {
            if(x != 1)
            {
                int flag = 1;
                fr(i, 0, v.size() - 1)
                {
                    if(v[i].sec == x)
                    {
                        flag=0; v[i].sec=0;
                    }
                }
                if(flag) cout << "Already off" << endl;
                else cout << "Success" << endl;
            }
            else
            {
                if(checkone)
                {
                    checkone = 0; cout << "Success" << endl;
                }
                else cout << "Already off" << endl;
            }
        }
        else
        {
            if(x != 1)
            {
                int flag = 1, conf = 1;
                fr(i, 0, sqrt(x))
                {
                    if(x%v[i].fi == 0 && v[i].sec != 0)
                    {
                        flag = 0; conf = v[i].sec; break;
                    }
                }
                if(flag==0)
                {
                    if(conf!=x) cout << "Conflict with " << conf << endl;
                    else cout<<"Already on"<<endl;
                }
                else
                {
                    fr(i, 0, v.size() - 1)
                    {
                        if(x%v[i].fi == 0) v[i].sec = x;
                    }
                    cout << "Success" << endl;
                }
            }
            else
            {
                if(checkone) cout << "Already on" << endl;
                else
                {
                    checkone = 1;
                    cout << "Success" << endl;
                }
            }
        }
    }

    return 0;
}
