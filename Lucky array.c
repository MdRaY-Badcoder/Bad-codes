#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
int N;
scanf("%d",&N);
int array[1000];
for(int i=0;i<N;i++){
    scanf("%d",&array[i]);
}
int min=array[0];
for(int i=1;i<N;i++){
    if(array[i]<min){
        min=array[i];
    }
}
int count=0;
for(int i=0;i<N;i++){
    if(array[i]==min){
        count++;
    }
}
if(count%2==1)printf("Lucky\n");
else printf("Unlucky\n");
    return 0;
}
