/*You are given n integers a1,a2,…,an, where n is odd. You are allowed to flip the sign of some (possibly all or none) of them. You wish to perform these flips in such a way that the following conditions hold:
At least n−12 of the adjacent differences ai+1−ai for i=1,2,…,n−1 are greater than or equal to 0.
At least n−12 of the adjacent differences ai+1−ai for i=1,2,…,n−1 are less than or equal to 0.
Find any valid way to flip the signs. It can be shown that under the given constraints, there always exists at least one choice of signs to flip that satisfies the required condition. If there are several solutions, you can find any of them.
*/

/*Solution:: Flip the signs alternately. Odd indices will have positive values and even
will have negative*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) {
            if(!(i % 2)) a[i] = -1 * abs(a[i]);  //if index is even, flip to negative sign
            else a[i] = abs(a[i]); //else flip to positive
        }
        for(int i = 0;i < n;i++) cout << a[i] << " ";
        cout << "\n";
    }

    return 0;
}
