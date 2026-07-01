#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr[i]=a;
        }
        sort(arr.begin(),arr.end());
        int ans=-1;
        int start=0;
        for(int i=1;i<n;i++){
           if(arr[i]-arr[i-1]>k){
            ans=max(ans,i-start);
            start=i;
           }
        }
        ans=max(ans,n-start);
        cout<<n-ans<<endl;
    }
    return 0;
}