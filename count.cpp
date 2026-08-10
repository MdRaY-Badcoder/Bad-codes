#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
cin>>s;
int result=0;
    for(int i=0;i<s.size();i++){
        result=result+(s[i]-'0');
    }
   cout<<result;
    return 0;
}
