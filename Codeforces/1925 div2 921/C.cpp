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


    int n,k,m;
    cin>>n>>k>>m;
    string str;
    cin>>str;
    char ch = 'a';
    map<char,ll>mp;
    for(auto &it:str)mp[it]++;
    string res="";
    bool flag = 1;
    f(i,0,k){
        if(mp[ch+i]<n){
            flag = 0;
            f(j,0,n){
                res.push_back(ch+i);
            }
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
        cout<<res<<endl;
    }
    // cout<<ans<<endl;
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