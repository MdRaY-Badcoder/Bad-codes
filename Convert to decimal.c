int main(){
    int T;
    scanf("%d",&T);

  while(T--){
   unsigned int N;
   scanf("%u",&N);
int count=0;

while(N>0){
    if(N%2==1)
count++;
N/=2;
}
unsigned int ans=(1U<<count)-1;
printf("%u\n",(1U<<count)-1);

  }
return 0;
}
