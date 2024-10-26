#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){
            ans+=s[i];
        }
    }
    sort(ans.begin(),ans.end());
    string res="";
    for(int i=0;i<ans.size();i++){
        res+=ans[i];
    }
    for(int i=0;i<res.size()-1;i++){
        cout<<res[i]<<"+";
    }
    cout<<res[res.size()-1];
    cout<<endl;
    
}
