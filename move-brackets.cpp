/*You are given a bracket sequence s of length n, where n is even (divisible by two). The string s consists of n2 opening brackets '(' and n2 closing brackets ')'.

In one move, you can choose exactly one bracket and move it to the beginning of the string or to the end of the string (i.e. you choose some index i, remove the i-th character of s and insert it before or after all remaining characters of s).

Your task is to find the minimum number of moves required to obtain regular bracket sequence from s.*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    ios :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, sudo = 0, moves = 0;
        cin >> n;
        string str;
        cin >> str;
        for(int i = 0; i < n; i++) {
            if(str[i] == '(') {
                sudo++;
            }
            else {
                sudo--;   //if bracket is closing
                if(sudo < 0) {
                moves++;
                sudo = 0;
                }
            }
        }
        cout << moves << endl;
    }

    return 0;

}
