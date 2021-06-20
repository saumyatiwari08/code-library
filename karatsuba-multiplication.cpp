#include<bits/stdc++.h>
using namespace std;

using lli = long long int;
#define CUTOFF 32

vector <lli> karatsuba(vector <lli> &A, vector <lli> &B){
	lli n = A.size();
	vector<lli> ans(2*n);
	
    if(n<=CUTOFF){
		for(lli i =0 ; i<n ;i++){
			for(lli j = 0 ;j<n ; j++){
				ans[i+j] += A[i]*B[j];
			}
		}
		return ans;
	}

	lli k = n>>1;

	vector<lli> Al(A.begin() ,A.begin()+k);
	vector<lli> Ar(A.begin()+k , A.end());
	vector<lli> Bl(B.begin() , B.begin()+k);
	vector<lli> Br(B.begin()+k , B.end());
    // Recursive Calls.
	vector<lli> AlBl = karatsuba(Al,Bl);
	vector<lli> ArBr = karatsuba(Ar , Br);
    
	for(lli i =0 ; i<(lli)Al.size() ; i++) Al[i]+= Ar[i];
	for(lli i =0 ; i<(lli)Bl.size() ; i++) Bl[i]+= Br[i];
	// Call on Sum Vectors
	vector<lli> Zm = karatsuba(Al,Bl);
	
    // Get the Final Parts from it.
	for(lli i =0 ; i<(lli)Zm.size() ; i++) Zm[i]-=AlBl[i];
	for(lli i =0; i<(lli)Zm.size() ; i++)  Zm[i]-= ArBr[i];
	for(lli i =0 ; i<(lli)Zm.size() ; i++) ans[i+k]+= Zm[i];
	for(lli i =0 ; i<(lli)AlBl.size() ; i++) ans[i] += AlBl[i];
	for(lli i =0; i<(lli)ArBr.size() ; i++) ans[i+n] += ArBr[i];
	return ans;
}


signed main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int _t; cin>> _t; 
	while(_t--){
		lli n ; cin>>n; 
		vector<lli> A(n+1),B(n+1);

		for(lli i =0 ; i<n+1; i++) cin>>A[i];
		for(lli i =0 ; i<n+1; i++) cin>>B[i];

 		//	reverse the arrays
		reverse(A.begin() , A.end()); reverse(B.begin() , B.end());

		lli sizeofA = A.size();
		//	resize to 2^
		while(sizeofA&(n-1)){
			A.emplace_back(0);
			B.emplace_back(0);
			sizeofA++;
		}  
		vector<lli > ans = karatsuba(A,B);
		ans.resize(2*n+1);
		reverse(ans.begin() , ans.end()); 
		for(auto i:ans){
			cout<<i<<" ";
		}
		cout<<"\n";
	}
}