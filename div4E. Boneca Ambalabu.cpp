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
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        forn(0,n){cin>>arr[i];}
        vector<pair<int,int>>bit(32);
        for(int i=0;i<32;i++){
            //int cnto=0,cntz=0;
            for(int j=0;j<n;j++){
                if((1<<i)&arr[j]){
                    bit[i].second++;
                }
                else{
                    bit[i].first++;
                }
            }
        }
        ll lmaxi=INT64_MIN;
        for(int i=0;i<n;i++){
            ll result=0;
            for(int j=0;j<32;j++){
                ll cnto=0,cntz=0;
                if(arr[i]&(1<<j)){
                    cntz=bit[j].first;
                    result+=(1<<j)*cntz;
                }
                else{
                    cnto=bit[j].second;
                    result+=(1<<j)*cnto;
                }
            }
            lmaxi=max(lmaxi,result);
        }
        cout<<lmaxi<<endl;
    }
}
