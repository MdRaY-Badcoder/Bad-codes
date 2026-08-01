#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int n,m;
     scanf("%d %d",&n,&m);
    int array[100][100];

    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
        scanf("%d",&array[i][j]);
        }
     }
   int x;
   scanf("%d",&x);
   for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
     if(array[i][j]==x){
        printf("will not take number\n");
        return 0;
          }
        }
      } 
    printf("will take number");
    
   return 0;
}
