#include<bits/stdc++.h>
using namespace std;

int main(){
string s,t;
cin>>s>>t;

for(int i=0;i<s.size();i++){
    char a=tolower(s[i]);
    char b=tolower(t[i]);
    if(a<b){
        cout<<"-1";
        return 0;
    }
    if(a>b){
        cout<<"1";
        return 0;
    }
}
 cout<<"0";
 return 0;
 }
