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

int main(){
    KUNAL
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        int a=0;
        forn(0,n){
            a|=i;
        }
        if(a==x){
            forn(0,n){cout<<i<<" ";}
            cout<<endl; 
            continue;
        }
        vector<int>ans;
        forn(0,n-1){
            if((i|x)==x){
                ans.push_back(i);
            }
        }
        while(ans.size()!=n){
            ans.push_back(x);
        }
        for(auto &val:ans){
            cout<<val<<" ";  
        }
        cout<<endl;
    }
}