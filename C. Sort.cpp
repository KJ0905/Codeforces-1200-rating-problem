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
    int n,q; cin>>n>>q;
    string a,b; cin>>a>>b;
    vector<vector<int>>va(26,vector<int>(n+1));
    vector<vector<int>>vb(26,vector<int>(n+1));
    forn(1,n+1){
        char ch=a[i-1];
        int j=ch-'a';
        va[j][i]=1;
        char ch2=b[i-1];
        int k=ch2-'a';
        vb[k][i]=1;
    }
   /* for(int i=0;i<26;i++){
        for(int j=0;j<n+1;j++){
            cout<<va[i][j]<<" ";
        }cout<<endl;
    }*/
    for(int i=0;i<26;i++){
        for(int j=1;j<n+1;j++){
            va[i][j]+=va[i][j-1];
            vb[i][j]+=vb[i][j-1];
        }
    }
    while(q--){
        int l,r; cin>>l>>r;
        int ans=0;
        for(int i=0;i<26;i++){
            int cnt1=va[i][r]-va[i][l-1];
            int cnt2=vb[i][r]-vb[i][l-1];
            if(cnt1>cnt2){
                ans+=cnt1-cnt2;
            }
        }
        cout<<ans<<endl;
    }
    return;
}
int main(){
    KUNAL
    int t; cin>>t;
    while(t--){
        solve();
    }
}