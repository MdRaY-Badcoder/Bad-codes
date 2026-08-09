#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int array[n];
    int found =0;
    for(int x=0;x<n;x++){
        cin>>array[x];
        if(array[x]==1){
            found=1;
          break;
        }
    }

    if(found==1){
        cout<<"HARD";
    }else
        cout<<"EASY";
    return 0;
}
