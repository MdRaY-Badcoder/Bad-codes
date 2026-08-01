#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
int A,B;
scanf("%d %d",&A,&B);
char s[25];
scanf("%s",&s);

if(s[A]!='-'){
    printf("No\n");
    return 0;
}

for(int i=0;i<A+B+1;i++){
        if(i==A)
        continue;
    if(s[i]<'0' || s[i]>'9'){
        printf("No\n");
        return 0;
    }
}

printf("Yes\n");

return 0;
}
