/*For any bulb i, its final state depends on the parity of the number of divisors of i. If i has an even number of divisors, then bulb i
 will be on; else it will be off. This translates to, if i is not a perfect square, bulb i will be on; else it will be off. So now the problem 
 is to find the kth number which is not a perfect square. This can be done by binary searching the value of n such that n−⌊√n⌋=k or the direct 
 formula n= ⌊k+√k+0.5⌋ .*/

 
#include<bits/stdc++.h>
//#include <math>
//#include <string>
using namespace std;
#define ll long long
#define ld long double
#define forn(j,m) for(int i=j;i<m;i++)
int mini=INT_MAX;
int maxi=INT_MIN;
ll lmini=INT64_MAX;
ll lmaxi=INT64_MIN;
#define mod 1000000007
#define inf 1e9
//freopen("guess.in","r",stdin);   freopen("billboard.out","w",stdout);
#define all(x) (x).begin(), (x).end()  //sort(all(vec)) instead of sort(vec.begin(), vec.end()).
#define al(x,n) x,x+n
#define KUNAL ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
 ll k; cin>>k;
 ll s=0,e=INT64_MAX; ll ans=0;
 while(s<=e){
    ll mid=(s+e)>>1;
    ll onno=mid-(ll)sqrt(mid);
    if(onno>=k){
        ans=mid;
        e=mid-1;
    }
    else{
        s=mid+1;
    }
 }
 cout<<ans<<endl;
 return;
}

int main() {
    KUNAL
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}