//Equivalent Strings
// Find the lexicographical min string b/w two halves of a string by divide and conquer principle(ex. abba, min string = abab because within second half min a < b)
// Time Complexity : O(nlog(n))
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

string equi(string s) {
    if(s.size() % 2) return s;
    string s1 = equi(s.substr(0, s.size()/2));
    string s2 = equi(s.substr(s.size()/2));
    if(s1 < s2) return s1 + s2;
    else return s2 + s1;
}

int main() {
    ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        string a, b;
        cin >> a >> b;
        string s1 = equi(a), s2 = equi(b);
        if(s1 == s2) yes
        else no
        return 0;
}
