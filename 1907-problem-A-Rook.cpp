#include <iostream>
 
using namespace std;
 
 
int main() {
    int t;
    cin>>t;
    while(t--){
        char a[2];
        // scanf("%s",a);
        cin>>a[0]>>a[1];
        // cout<<a[1];
        int i= a[0];
        // int b= a[1];
        // cout<<b;
        for(int j=97; j<105; j++){
            if(j==i){
                continue;
            }
            // print
            cout<<char(j)<<a[1]<<" ";
        }
        for(char j=49; j<57; j++){
            if(j==a[1]){
                // cout<<"a";
                continue;
            }
            cout<<a[0]<<j<<" ";
        }
        cout<<"\n";
    }
   
}