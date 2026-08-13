#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
int found=0;
for(int i=0;i<s.size()/2;i++){
    if(s[i]!=s[s.size()-1-i]){
       found=1;
       break;
    }
}
if(found==1){
    cout<<"NO\n";
}else
cout<<"YES\n";
 return 0;
 }
