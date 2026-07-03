#include<stdio.h>
#include<conio.h>

int isOdd(int n){
return n%2!=0 ;
}

int palin(int n){
int binary[32];
int size=0;
if(n==0){
    binary[size++]=0;

}
while(n>0){

    binary[size++]=n%2;
    n/=2;
}
for(int i=0; i< size/2 ;i++){
    if(binary[i]!=binary[size-1-i]){
        return 0;
    }
}
return 1;
}

int main(){
int N;
scanf("%d",&N);

if(isOdd(N)&& palin(N))

printf("YES");
else

    printf("NO");
return 0;
}

