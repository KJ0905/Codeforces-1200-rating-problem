//OFFICIAL EDITORIAL

/* It is clear that the score of an array b of length n can be expressed as n∗b1+(n−1)∗b2+(n−2)∗b3⋯+1∗bn.
Let's solve this problem with m=1 for n arrays with 1 element in each. Due to the above fact, it's clear that the optimal way to arrange this array is to sort the elements from largest to smallest.

Now, we come to the issue of combining arrays. Suppose you have two arrays a and b, both of length m. Is there a nice way of expressing the score of a+b
and the score of b+a (where + represents concatenation) in terms of score(a) and score(b) ?

Turns out there is. The score of a+b is equal to n∗sum(a)+score(a)+score(b).This is because of the following:

score(a+b)=(2n∗a1)+((2n−1)∗a2)⋯+((n+1)∗an)+(n∗b1)⋯+(1∗bn)

Now, we can clearly replace all the b terms with score(b) as follows: score(a+b)=(2n∗a1)+((2n−1)∗a2)⋯+((n+1)∗an)+score(b)

Now, we can take out a factor of n as follows: score(a+b)=((n+n)∗a1)+((n+(n−1))∗a2)⋯+((n+1)∗an)+score(b)
 score(a+b)=(n∗(a1+a2+a3))+(n∗a1)+((n−1)∗a2)⋯+(1∗an)+score(b)
 score(a+b)=(n∗sum(a))+score(a)+score(b)

Therefore, whichever of a
 and b has the larger sum should go first, because then you get a larger overall score. This argument also extends beyond two arrays, so the solution is as follows:
Sort the arrays themselves in terms of their sum, from largest sum to smallest Put together the final array Take the score This score is guaranteed to be maximal.
*/

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
        ll n,m; cin>>n>>m;
        vector<vector<ll>>v(n,vector<ll>(m));
        vector<pair<ll,ll>>sum(n);
        for(int i=0;i<n;i++){
            ll s=0;
            ll score=0;
            for(int j=0;j<m;j++){
                cin>>v[i][j];
                s+=v[i][j];
                score+=(m-j)*v[i][j];
            }
            sum[i].first=s;
            sum[i].second=score;
        }
        sort(all(sum));
        /*for(auto &val:sum){
            cout<<val<<" ";
        }cout<<endl;*/
        reverse(sum.begin(),sum.end());
       /*  for(auto &val:sum){
            cout<<val<<" ";
        }cout<<endl;*/
        ll ans=0;
        for(int i=0;i<n;i++){
            ans+=(n-i-1)*m*sum[i].first;
        }
        for(int i=0;i<n;i++){
            ans+=sum[i].second;
        }
        cout<<ans<<endl;
    }
}