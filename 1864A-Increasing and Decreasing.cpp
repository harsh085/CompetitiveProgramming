#include <cmath>
#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int arr[n];
        arr[0] = x;
        arr[n-1]=y; 
        int count=1;
        bool not_possible = 0;
        for(int i=n-2; i>0; i-- ){
            arr[i] = arr[i+1]-count;
            count++;
            if((arr[i]-count)<arr[0]){
                not_possible = 1;
            }
            // cout<<arr[i+1];
        }
        if(not_possible){
            cout<<-1;
        }
       else{ for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
       }} 
        cout<<endl;
    }
    return 0;
}
