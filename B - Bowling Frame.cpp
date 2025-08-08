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


ll getpins(ll x)
{
    ll ret = (x*(x + 1))/2;
    return ret;
}
 
void solve()
{
    ll w,b;
    cin>>w>>b;
 
    ll sum = w + b;
    ll l = 0;
    ll r = sum;
    ll ans = 0;
 
    while(l <= r)
    {
        ll mid = (l + r)/2;
 
        ll cnt = getpins(mid);
        if(cnt <= sum)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
 
    cout<<ans<<"\n";
}
int main(){
    KUNAL
    int t; cin>>t;
    while(t--){
        solve();
    } 
}