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
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mi map<int,int>
#define ml map<ll,ll>
#define mp make_pair
#define tc ll t; cin >>t; while(t--)
#define fr(i,a,b) for(int i=a; i<=b; i++)
#define rf(a,b,c) for(int i=a; a>=b; i--)
#define yes cout << "YES" <<endl;
#define no cout << "NO" << endl;


int main() {

    ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    tc {
        ll n;
        cin >> n;
        int a[n], b[n];
        fr(i, 0, n - 1) {
            cin >> a[i];
        }
        fr(i, 0, n - 1) {
            cin >> b[i];
        }
        ml mp1,mp2;
        fr(i, 0, n-1) {
            mp1[a[i]]++;
            mp2[b[i]]++;
        }
       /* ml::iterator it;
        cout << "map1"<< endl;
        for(it= mp1.begin();it!= mp1.end();it++)
            cout << it->first << " " <<it->second << endl;
            cout << "map2" << endl;
        for(it = mp2.begin();it!= mp2.end();it++)
           cout << it->first << " " <<it->second << endl;*/

        ll m1,m2,m;
        m1 = *min_element(a, a+n);
        m2 = *min_element(b, b+n);
        m = min(m1, m2);

        ll diff, min_cost = 0;
        int flag = 0, sudo = 0;
        fr(i, 0, n-1) {
            diff = abs(mp1[a[i]] - mp2[a[i]]); //Number of occurrence is odd
            if(diff%2) {
                flag = 1;
                break;;
            }
            else if(diff == 0) sudo++;
        }
        if(flag) {
             cout << -1 << "\n";
             continue;   // next case
        }
        else if(sudo == n) {
            cout << 0 <<"\n";
            continue;
        }
        else {
            //cout << "min " << m <<endl;
            vl vla,vlb;
            ll d1, d2;

            vi v1(a, a + n);
            vi::iterator itr;
            sort(v1.begin(), v1.end());
            itr = unique(v1.begin(), v1.end());
            v1.resize(distance(v1.begin(), itr));

            vi v2(b, b + n);
            sort(v2.begin(), v2.end());
            itr = unique(v2.begin(), v2.end());
            v2.resize(distance(v2.begin(), itr));
        /*  fr(i,0,v1.size()-1) cout << "vect a " << v1[i] << endl;
            fr(i,0,v1.size()-1) cout << "vect b " << v2[i] << endl;*/


            fr(i, 0, v1.size()-1) {
                  d1= mp1[v1[i]] - mp2[v1[i]];
                  if(d1 > 0) vla.pb(v1[i]);
                  else vlb.pb(v1[i]);
            }

            fr(i, 0, v2.size()-1) {
                d2 = mp2[v2[i]] - mp1[v2[i]];
                if(d2 > 0) vlb.pb(v2[i]);
                else vla.pb(v2[i]);
            }


            sort(vla.begin(), vla.end());
            sort(vlb.begin(), vlb.end(), greater<>());

          /*cout << "Vector1 " <<endl;
            fr(i,0,vla.size()-1) cout << vla[i] << " ";
            cout << endl << "vector 2" << endl;
            fr(i,0,vlb.size()-1) cout << vlb[i] << " "; cout << endl; */

            fr(i, 0, vla.size()-1) {
                min_cost += min(vla[i], vlb[i]);
            }
        }
        cout << min(2*m,min_cost)<< "\n";
    }

    return 0;
}
