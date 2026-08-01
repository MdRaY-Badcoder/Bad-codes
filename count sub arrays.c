#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
int t;
scanf("%d",&t);

while(t--){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
      }
    int count=0;
    for(int i=0;i<n;i++){
        count++;
        
        for(int j=i+1;j<n;j++){
            if(array[j]>=array[j-1]){
                count++;
            } else {
            break;
        }
       }
     }
     printf("%d\n",count);
   }
    return 0;
}
