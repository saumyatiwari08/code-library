#include<bits/stdc++.h>
using namespace std;


int main(){
 int t,a,b,x;
 cin >> t;
 while(t--){
  cin >> a >> b;

  int A[a],B[b];
  for(int i=0;i<a;i++) scanf("%d", &A[i]);

  scanf("%d", &B[0]);
  for(int i=1;i<b;i++){
   scanf("%d", &x);
   B[i] = max(B[i-1],x);
  }

  int M=-1,id=-1;
  for(int i=0;i<a;i++){
   x = upper_bound(B,B+b,A[i]) - B;
   if(x > M){
    M = x;
    id = i;
   }
  }
  cout << id << endl;
 }
 return 0;
}