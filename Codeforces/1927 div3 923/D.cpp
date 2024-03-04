#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// #define inf 1000000000
#define f(i,a,b) for(int i=a; i<b; i++)
#define endl "\n"
// const int mod=1e9+7;

void solve(){
    int n; cin>>n;
    vector<ll> a(n);

    f(i,0,n) cin>>a[i];

    ll bs = 0, mss = 0, css =0 , ts = 0;
    f(i,0,n) ts+= a[i];
    f(i,0,n){
        if(i%2 ==0){
            bs += a[i];
        }
        css +=a[i];
        if(i%2==0){
            mss = max(mss,css);
            css = max(css,0LL);

        }
    }
     ll ans = max(ts,bs+mss);
     cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; 
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}