#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isIsogram(string word)
{
    for(int i =0; i< word.size()-1; i++)
    {
        if(word[i] == word[i+1])
            return false;
    }
    return true;
}

void solve()
{
    string word;
    cin >> word;
    
    sort(word.begin(), word.end());
    // Check if it is isogram or not
    if(isIsogram(word))
        cout <<1<<endl;
    else
        cout <<0<<endl;
}

int main()
{
    int t; 
    cin >> t; 
    
    while(t--)
        solve();
	
	return 0;
}