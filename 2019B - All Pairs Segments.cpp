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

void solve(){
    ll n,q; cin>>n>>q;
    vector<ll>v(n+1); v[0]=0;
    forn(1,n+1){cin>>v[i];}
    map<ll,ll>m;
    for(ll i=1;i<=n;i++){
        if(i+1<=n){
            if(v[i+1]-v[i]!=1){
                ll num=v[i+1]-v[i]-1;
                ll s=i*(n-i);
                m[s]+=num;
            }
        }
        ll s=(i-1)*(n-i+1)+(n-i);
        m[s]++;
    }
    while(q--){
        ll k; cin>>k;
        cout<<m[k]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    KUNAL
    int t; cin>>t;
    while(t--){
        solve();
    }
}