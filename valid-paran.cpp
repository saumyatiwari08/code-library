#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int n = s.size();
        stack<char> st;
        int ans=0;
        for (int i = 0; i < n; ++i) {
            if(s[i] == '(')
                st.push('(');
            else {
                if(st.empty()) ans++;
                else st.pop();
            }
        }
        while(!st.empty()) {
            st.pop();
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}