#include<bits/stdc++.h>
using namespace std;
int main(){
  string s; cin>>s;
  string s2="";
  for(int i=0;i<s.size();++i){
      if(s[i]=='.'){
          s2+='0';
      } if(s[i]=='-'&&s[i+1]=='.'){
          s2+='1';
          ++i;
      } if(s[i]=='-'&&s[i+1]=='-'){
          s2+='2';
          ++i;
      }
  }
  cout<<s2<<endl;
}
