#include <iostream>
// #include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        } 
        bool sorted = 0;
        int c=0;
        while(!sorted){
            c++;
            int temparr[n];
            int tempval; 
            for(int i=0; i<n; i++){
                if(arr[i]!=i+1 && arr[i]>1){
                    tempval = arr[i];
                    break;
                }
            }
            // cout<<tempval<<"tempval"<<endl;
            int count=0;
            for(int i=0; i<n; i++){
                if(arr[i]<tempval){
                    temparr[count] = arr[i];
                    count++;
                }
            }
            // cout<<count<<"count"<<endl;
            temparr[count] = tempval;
            count++;
            for(int i=0; i<n; i++){
                if(arr[i]>tempval){
                    temparr[count] = arr[i];
                    count++;
                }
            }
            sorted = 1;
            // cout<<count<<"count"<<endl;
            for(int i=0; i<n; i++){
                arr[i] = temparr[i];
                // cout<<arr[i]<<endl;
                
                if(temparr[i]!=i+1){
                    sorted = 0;
                    }
                            }
            
        }
        cout<<c<<endl;
    }
    return 0;
}
