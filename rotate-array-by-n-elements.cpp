#include <bits/stdc++.h>
using namespace std;

void solve_test()
{
    long long n, d , element;
    cin >> n >> d;
    vector<int>numbers;
    for(int i=0; i <n; i++)
    {   
        cin >> element;
        numbers.push_back(element);
    }
    for(int i =d; i <numbers.size(); i++)
        cout << numbers[i] << " ";
    for(int i=0; i<=d-1; i++)
        cout <<numbers[i] << " ";

    cout <<""<<endl;

}

int main()
 {
	short int test_cases;
	cin >>test_cases;
	while(test_cases--)
	    solve_test();
	return 0;
}
