    #include<bits/stdc++.h>
    using namespace std;

    typedef long long ll;

    // #define inf 1000000000
    #define f(i,a,b) for(int i=a; i<b; i++)
    #define endl "\n"
    // const int mod=1e9+7;

    void solve(){
        ll a,b,c; cin>>a>>b>>c;
        //  cout<<(a|b)<<endl;
        if(a<b) swap(a,b);
        ll ans = a-b, cnt=0, mn=ans;
        for(int i=60; i>=0; i--){
            if(((b>>i)&1)==0 && ((a>>i)&1)==1 && cnt+(1ll<<i)<=c){
                if(ans>=2*(1ll<<i)){
                    cnt+=(1ll<<i);
                    ans-=2*(1ll<<i);

                }
                else{
                    mn = min(mn,2*(1ll<<i)-ans);
                }
            }

        }
        cout<<min(ans,mn)<<endl;
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