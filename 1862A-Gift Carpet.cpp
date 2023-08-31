#include <iostream>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){ 
    int r,c; cin>>r>>c;
    char a[r][c];
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++)
        {
        cin>>a[i][j];
        }
    }
    bool v=0,ii=0,k=0,aa =0;    
    for(int i=0; i<c; i++) {
        for(int j=0; j<r; j++)
        {
            // cout<<j<<" "<<i;
        if(v == 0 && a[j][i] == 'v')
        {
            v = 1;
            // cout<<"v"<<v<<ii<<k<<aa;
            break;
        }
        if(v == 1 && ii==0 && a[j][i] == 'i')
        {
            ii = 1;
            // cout<<"i"<<v<<ii<<k<<aa;;
            break;
        }
        if(v == 1 && ii==1 && k==0 && a[j][i] == 'k')
        {
            k = 1;
            // cout<<'k'<<v<<ii<<k<<aa;;
            break;
        }
        if(v == 1 && ii==1 && k==1 && aa==0 && a[j][i] == 'a')
        {
            aa = 1;
            break;
        }
            // cout<<endl;
        }
    
        // cout<<endl;
    }
    if(v == 1 && ii==1 && k==1 && aa==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }cout<<endl;
    }
   return 0;
}
