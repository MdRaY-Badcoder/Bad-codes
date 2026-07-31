#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
int N;
scanf("%d",&N);

char array[N];
scanf("%s",array);

for(int i=0;i<N;i++){
   sum+=array[i];
}
printf("%d\n",sum);
return 0;
}
