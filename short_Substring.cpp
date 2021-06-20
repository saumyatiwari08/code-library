///Method 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector <char> a;
        string str;
        cin >> str;

        vector <char> b(str.begin(), str.end());
        a.push_back(b[0]);
        a.push_back(b[1]);

        for (int i = 3; i < b.size(); i += 2) {
            a.push_back(b[i]);
        }

        vector <char> :: iterator it;
        for (it = a.begin(); it != a.end(); it ++) {
            cout << *it;
        }
        cout << endl;
     }
}
