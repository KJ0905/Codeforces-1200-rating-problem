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
        int n,k; cin>>n>>k;
        vector<int>v(n+1);
        forn(1,n+1){
            cin>>v[i];
        }
        bool b=true; int cnt1=0,cnt2=0;
        int ind=-1;
        for(int i=1;i<n+1;i++){
            if(i==k){continue;}
            if(v[i]>v[k]){
                ind=i; break;
            }
            cnt1++;
        }
        if(ind==-1){
            cout<<n-1<<endl; continue;
        }
        if(ind>k){
            cout<<cnt1<<endl; continue;
        }
        for(int i=ind+1;i<k;i++){
            if(v[i]>v[k]){break;}
            if(v[i]<v[k]){
                cnt2++;
            }
        }
        if(cnt1!=0){int ans=cnt2+1; int b=cnt1-1; cout<<max(ans,b)<<endl; continue;}
        cout<<cnt2<<endl;
    } 
}