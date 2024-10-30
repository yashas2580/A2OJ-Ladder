#include<bits/stdc++.h>
using namespace std;
int main(){
   int n; cin>>n; int count=0;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
       arr[i]=(i+1)*(i+1);
   }
   unordered_map<int,int>mp;
   for(int i=0;i<n;i++){
       mp[arr[i]]=i;
   }
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           if(mp.find(arr[i]+arr[j])!=mp.end()){
               count++;
           }
       }
   }
   cout<<count<<endl;
}
