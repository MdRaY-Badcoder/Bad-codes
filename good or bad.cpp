#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
        string s;
        cin>>s;
  int found=0;
 for(int i=0;i+2<s.size();i++){
    if((s[i]=='0' && s [i+1]== '1' && s[i+2]=='0')||
       (s[i]=='1' && s[i+1] =='0' && s[i+2]=='1')){
        found=1;
    break;
    }
  }
 if(found==1){
       cout<<"Good\n";
 }
 else
    cout<<"Bad\n";
 }
 return 0;
 }
