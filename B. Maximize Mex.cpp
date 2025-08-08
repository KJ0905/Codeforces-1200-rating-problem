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
  int n,x; cin>>n>>x;
  int arr[n];
  forn(0,n){cin>>arr[i];}
  vector<int>freq(n);
  forn(0,n){
    if(arr[i]>=n){continue;}
    freq[arr[i]]++;
  }
  //forn(0,n){cout<<freq[i]<<" ";}
  for(int i=0;i<n;i++){
    if(freq[i]==0){cout<<i<<endl; return;}
    if(freq[i]==1){continue;}
    if(freq[i]>1){
        if(i+x<n){
            freq[i+x]+=freq[i]-1;
        }
        freq[i]=1;
    }
  }
  cout<<n<<endl;
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