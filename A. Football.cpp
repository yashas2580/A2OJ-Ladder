#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
   int n; cin>>n;
   string s[n];
   for(int i=0;i<n;i++) cin>>s[i];
   string temp1=s[0];
   string temp2;
   int c1=0,c2=0;
   for(int i=0;i<n;i++){
       if(s[i]==temp1){
           c1++;
       }else{
           temp2=s[i];
           c2++;
       }
   }
   if(c1>c2){
       cout<<temp1<<endl;
   }else{
       cout<<temp2<<endl;
   }
}
