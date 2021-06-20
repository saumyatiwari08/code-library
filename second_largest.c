#include<stdio.h>
#include <limits.h>
#include<string.h>


typedef long long int ll;
typedef long double ld;
#define tc int t; cin >>t; while(t--)
#define fr(i,a,b) for(ll i=a; i<b; ++i)
#define rf(a,b,c) for(ll i=a; a>b; --i)


int compare(char a[], char b[]) {
  int l1, l2, p1, p2, n;

  // Checking if any of the numbers is negative

  if (a[0] == '-')
    p1 = 0;
  else
    p1 = 1;

  if (b[0] == '-')
    p2 = 0;
  else
    p2 = 1;

  // Calculating length of strings

  l1 = strlen(a);
  l2 = strlen(b);

  // Both numbers positive

  if (p1 == 1 && p2 == 1) {
    if (l1 > l2)
      return 1;
    else if (l2 > l1)
      return 2;
    else {
      for (n = 0; n < l1; n++) {
        if (a[n] > b[n])
          return 1;
        if (b[n] > a[n])
          return 2;
      }
    }
  }

  // If one number is positive and other is negative

  if (p1 == 1 && p2 == 0) // 1st no positive
    return 1;
  if (p1 == 0 && p2 == 1) // 2nd no positive
    return 2;

  // If both numbers negative

  if (l1 < l2)
    return 1;
  if (l2 < l1)
    return 2;

  for (n = 1; n < l1; n++) {
    if (a[n] < b[n])
      return 1;
    if (b[n] < a[n])
      return 2;
  }

  return 0; // Both numbers (-ve) are same.
}

// function to find the second largest number
void solve() {

    ll n;
    scanf("%lld", &n);
    char b[n][50];

    fr(i, 0, n) {
        scanf("%s", b[i]);  // reading each string
    }

    char lar[50], second_lar[50], min[50];
    sprintf(min, "%lld", LLONG_MIN);
    strcpy(lar, min);
    strcpy(second_lar, min);

    fr(i, 0, n) {

        if(compare(lar, b[i]) == 2){
            strcpy(second_lar, lar);
            strcpy(lar, b[i]);
        }
        else if(compare(second_lar, b[i]) == 2 && compare(b[i], lar)!= 0) {
            strcpy(second_lar, b[i]);
        }
      }
    if(compare(second_lar, min) == 0)
          printf("-1");

    else
          printf("%s", second_lar);
}


int main() {

    solve();
}


