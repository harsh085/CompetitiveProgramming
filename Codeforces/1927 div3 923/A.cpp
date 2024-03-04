#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define take(a)  int a; cin>>a;
#define all(x) x.begin(), x.end()
#define f(i,a,b) for(int i = a; i < b; i++)
#define sz(c) int((c).size())
#define vi vector <int>
#define vll vector <long long>
#define pi pair <int,int>
ll mod=998244353;
ll power(ll a,ll b,ll m){
    if(b==0){
        return 1;
    }
    ll pr=power(a,b/2,m);
    if(b%2){
        return (((pr*pr)%m)*a)%m;
    }
    else{
        return (pr*pr)%m;
    }
}

//ll mod_inv(ll x){
    //return power(x,mod-2,mod);
//}
void dfs(vector<vector<int>>&v, int node,vector<int> &visited){
    if(visited[node]==1)return;
    visited[node]=1;
    for(auto x:v[node]){
        dfs(v,x,visited);
    }
}

void solve(){
 f(i,0,10){i++;}
    int n;cin>>n;
    string s;cin>>s;
    int c=0, b=1,i,j;
    f(d,0,n){
        c++;
        if(s[d]=='B'){
            if(b){
                i = c;
                b=0;
            }
            j = c;
        }

    } if(j==i){
        cout<<1<<endl;
        return ;
    }
    cout<<j-i+1<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    f(i,0,10){i++;}
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}