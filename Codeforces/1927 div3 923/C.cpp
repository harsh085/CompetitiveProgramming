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
    int n,m,k;
    // int a[10000001]={0}, b[10000001]={0};
    vector<ll> a(n),b(m);
    int temp;
    f(i,0,n){ 
        cin>>a[i];
        // a[temp]++;
    }
    f(i,0,m){
        cin>>b[i];
        // b[temp]++;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    unordered_set<ll> mapa, mapb, mapcom;
    f(i,0,n){ 
        if(a[i]<=k){
            mapa.insert(a[i]);
        }
        // a[temp]++;
    }
    f(i,0,m){
       if(b[i]<=k){
            // mapb[b[i]]++;
            mapb.insert(b[i]);

        }
    }
    for(auto aa:mapa){
        if(mapb.find(aa) != mapb.end()){
            mapcom.insert(aa);
            mapb.erase(aa);
        }
    } 
    for(auto aa:mapcom){
        mapa.erase(aa);
    }

    ll s = mapa.size()+mapb.size()+mapcom.size();
    if(s<k){
        cout<<"NO"<<endl;
        return;
    }
    // int ca=0,cb=0,ce=0;
    // f(i,1,k+1){
    //     if(a[i]>0 && b[i]>0){
    //         ce++;
    //         continue;
    //     }
    //     if(a[i]>0){
    //         ca++;
    //     }
    //     if(b[i]>0){
    //         cb++;
    //     }

    // }
   
    cout<<"YES"<<endl;

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