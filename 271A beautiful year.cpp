#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin>>y;
    y++;
    while(1){
        string s=to_string(y);
        int found=0;
        for(int i=0;i<4;i++){
                for(int j=i+1;j<4;j++){
            if(s[i]==s[j]){
                found=1;
             break;
            }
                }
                if(found)
                    break;
            }
            if(found==0){
               cout<<y;
               break;
            }
            y++;
    }
    return 0;
}
