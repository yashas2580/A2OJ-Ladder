#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>arr(n); int count=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    int sum=accumulate(arr.begin(),arr.end(),0);
    for(int i=0;i<n;i++){
        if(sum%2==0){
            if(arr[i]%2==0){
                count++;
            }
        }else{
            if(arr[i]%2!=0) count++;
        }
    }
    cout<<count<<endl;
}
