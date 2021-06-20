#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;
const long long INF64 = (long long)(1e18) + 100;

pair <ll, ll> arr2[100005][28];

ll query(ll l, ll r, ll n, char c)
{
    l = l + n;
    r = r + n;
    ll ans1[28] = { 0 };
    ll ans0[28] = { 0 };
    while (l < r)
    {
        if (l % 2 == 1)
        {
            for (ll i = 27; i >= 0; i--)
            {
                ans0[i] += arr2[l][i].first;
                ans1[i] += arr2[l][i].second;
            }
            l = l + 1;
        }
        else if (r % 2 == 1)
        {
            r = r - 1;
            for (ll i = 27; i >= 0; i--)
            {
                ans0[i] += arr2[r][i].first;
                ans1[i] += arr2[r][i].second;
            }
        }
        l = l / 2;
        r = r / 2;
    }
    ll ans = 0;
    if (c == 'o')
    {
        for (ll i = 0; i < 28; i++)
        {
            ll x = ans1[i];
            ll y = ans0[i];
            ll z = x + y;
            ans += pow(2, i)*((z*(z - 1) / 2) - (y * (y - 1) / 2));
        }
    }
    else if (c == 'a')
    {
        for (ll i = 0; i < 28; i++)
        {
            ll x = ans1[i];
            ll y = ans0[i];
            ans += pow(2, i)*((x*(x - 1) / 2));
        }
    }
    else
    {
        for (ll i = 0; i < 28; i++)
        {
            ll x = ans1[i];
            ll y = ans0[i];
            ll z = x + y;
            ans += pow(2, i)*((z*(z - 1) / 2) - (x * (x - 1) / 2) - (y * (y - 1) / 2));
        }
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (ll i = n; i < 2 * n; i++)
    {
        ll k = arr[i - n];
        for (ll j = 27; j >= 0; j--)
        {
            ll p = pow(2, j);
            if (p <= k)
            {
                k -= p;
                arr2[i][j].first = 0;
                arr2[i][j].second = 1;
            }
            else
            {
                arr2[i][j].first = 1;
                arr2[i][j].second = 0;
            }
        }
    }
    for (ll i = n - 1; i >= 1; i--)
    {
        for (ll j = 27; j >= 0; j--)
        {
            arr2[i][j].first = arr2[2 * i][j].first + arr2[2 * i + 1][j].first;
            arr2[i][j].second = arr2[2 * i][j].second + arr2[2 * i + 1][j].second;
        }
    }

    for (ll i = 0; i < q; i++)
    {
        ll t;
        cin >> t;

        if (t == 1)
        {
            ll idx, val;
            cin >> val >> idx;
            idx = idx + n - 1;
            for (ll j = 27; j >= 0; j--)
            {
                ll p = pow(2, j);
                if (p <= val)
                {
                    val -= p;
                    arr2[idx][j].first = 0;
                    arr2[idx][j].second = 1;
                }
                else
                {
                    arr2[idx][j].first = 1;
                    arr2[idx][j].second = 0;
                }
            }
            while (idx >= 1)
            {
                idx = idx / 2;
                for (ll j = 27; j >= 0; j--)
                {
                    arr2[idx][j].first = arr2[2 * idx][j].first + arr2[2 * idx + 1][j].first;
                    arr2[idx][j].second = arr2[2 * idx][j].second + arr2[2 * idx + 1][j].second;
                }
            }
        }

        if (t == 2)
        {
            string s;
            ll l, r;
            cin >> s >> l >> r;
            if (s[0] == 'O')
            {
                cout << query(l - 1, r, n, 'o') << endl;
            }
            else
            {
                if (s[0] == 'X') cout << query(l - 1, r, n, 'x') << endl;
                if (s[0] == 'A') cout << query(l - 1, r, n, 'a') << endl;
            }
        }
    }
}
