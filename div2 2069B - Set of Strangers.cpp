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
        int n,m; cin>>n>>m;
        vector<vector<int>>v(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        vector<bool>checknc(5e5);
        vector<int>nc;
        map<int,int>c;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                bool b=true;
                if(i-1>=0 && v[i][j]==v[i-1][j]){
                        c[v[i][j]]++;b=false;
                }
                else if(i+1<n && v[i][j]==v[i+1][j]){
                        c[v[i][j]]++;b=false;
                }
                else if(j-1>=0 && v[i][j]==v[i][j-1]){
                        c[v[i][j]]++;b=false;
                }
                else if(j+1<m && v[i][j]==v[i][j+1]){
                        c[v[i][j]]++;b=false;
                }
                if(b && !checknc[v[i][j]]){nc.push_back(v[i][j]); checknc[v[i][j]]=true;}
            }
        }

        int a=nc.size(),b=c.size();
        if(b==0){cout<<a-1<<endl; continue;}
        int ans=0;
        multimap<int,int>mp;
        for (auto& it : c) {
           mp.insert({ it.second, it.first });
        }
       // cout<<b<<mp.size()<<endl;
        int i=0;
        for(auto &val:mp){
            i++;
            if(checknc[val.second]){
                a--;
            }
            if(i==b){break;}
            ans+=2;
        }
        ans+=a;
        cout<<ans<<endl;
       // for(auto &val:nc){cout<<val<<" ";}cout<<endl;
       // for(auto &val:c){cout<<val.first<<val.second<<" ";}cout<<endl;
    }
}