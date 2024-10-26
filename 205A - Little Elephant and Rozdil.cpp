#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int mini=*min_element(arr.begin(),arr.end());
    int count=0; int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==mini){
            count++;
            ans=i+1;
        }
    }
    if(count==1){
        cout<<ans<<endl;
    }else{
        cout<<"Still Rozdil"<<endl;
    }
}
