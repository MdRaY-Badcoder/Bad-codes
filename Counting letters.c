#include<stdio.h>
#include<string.h>
int main(){

char word[40];
scanf("%s",&word);
int len=strlen(word);

if(len<=40){
    printf("%d",len);
}
else if(len>40){
    printf("More than 40 letters");
}
return 0;
}
