#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
  int n;
  while(t--){
cin>>n;
int x=n+1;

int prime=1;
if(x<2)
    prime=0;
  for(int i=2;i*i<=x;i++){
    if(x%i==0){
        prime=0;
    }
  }
  if(prime==1)
        cout<<"YES\n";
  else
    cout<<"NO\n";
  }
    return 0;
}
