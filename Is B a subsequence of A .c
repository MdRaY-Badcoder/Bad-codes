#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
  int n,m;
  scanf("%d %d",&n,&m);
  int A[n];
  int B[m];

for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
}
for(int j=0;j<m;j++)
   {
       scanf("%d",&B[j]);
   }
int j=0;
for(int i=0;i<n && j<m;i++ ){
    if(A[i]==B[j]){
        j++;
    }
}

if(j==m)
    printf("YES\n");
    else 
        printf("NO\n");
   return 0;
}
