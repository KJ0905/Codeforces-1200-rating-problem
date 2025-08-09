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


int bsleft(int d,vector<int>&t){
    int s=0,e=t.size()-1; int ans=-1e9;
    while(s<=e){
        int mid=(s+e)>>1;
        if(t[mid]<d){
            ans=t[mid];  
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    if(ans==-1e9){return -1;}
    return ans;
}
int bsright(int d,vector<int>&t){
    int s=0,e=t.size()-1; int ans=-1e9;
    while(s<=e){
        int mid=(s+e)>>1;
        if(t[mid]>d){
            ans=t[mid];
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    if(ans==-1e9){return -1;}
    return ans;
}
void solve(){
    int n,m,q; cin>>n>>m>>q;
    vector<int>t(m);
    forn(0,m){cin>>t[i];}
    sort(all(t));
    while(q--){
        int d; cin>>d;
        int r=bsright(d,t);
        int l=bsleft(d,t);
        int ans=0;
        //cout<<l<<" "<<r<<" ";
        if(r==-1){
            ans=n-d + d-l;
        } 
        else if(l==-1){
            ans=d-1 + r-d;
        }
        else{
            ans=(r-l)/2;
        }
        cout<<ans<<endl;
    }
}
int main(){
    KUNAL
    int t; cin>>t;
    while(t--){
        solve();
    }
}