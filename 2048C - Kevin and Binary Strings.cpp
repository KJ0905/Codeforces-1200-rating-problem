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
        string s; cin>>s;
        int n=s.size();
        int ind=-1;
        for(int i=0;i<(int)s.length();i++){
            if(s[i]=='1'){ind=i; break;}
        }
        if(ind==-1){
            cout<<1<<" "<<n<<" "<<1<<" "<<n<<endl;
            continue;
        }
        int cnt1=0,cnt0=0; //int ind0=0;
        for(int i=0;i<(int)s.length();i++){
            if(s[i]=='0'){cnt0++;}
            else{cnt1++;}
        }
        int ind2=-1;
        for(int i=ind;i<(int)s.size();i++){
            if(s[i]=='0'){ind2=i; break;}
        }
        if(ind2==-1){
            cout<<ind+1<<" "<<n<<" "<<1<<" "<<1<<endl; continue;
        }
     //   ll maxi=INT64_MIN;
        int length=n-ind2;
        vector<pair<string,pair<ll,ll>>>v;
        for(int i=ind;i<(int)s.size();i++){
            if(i+length>n){break;}
            string ans;
            int k=ind2;// ll value=0;// int cnt=0;
            for(int j=i;j<(i+length);j++){
                if(s[j]==s[k]){ans+='0';}
                else{ans+='1';}
                k++;
            }
            v.push_back({ans,{i+1,i+length}});
        }
        auto it=*max_element(v.begin(),v.end());
        cout<<ind+1<<" "<<n<<" "<<it.second.first<<" "<<it.second.second<<endl;
    } 
}