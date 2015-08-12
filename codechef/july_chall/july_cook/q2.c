#include<stdio.h>

int main(){
unsigned long long int N,M,q;
scanf("%llu %llu",&N,&M);
while(M--){
scanf("%llu",&q);
if(q<N+2 || q>3*N)
printf("0\n");
else{
if(q==N+2 || q==3*N){
printf("1\n");
}
else if(q<=(4*N+2)/2){
printf("%llu\n",q-(N+2)+1);
}else{
printf("%llu\n",3*N-q+1);
}
}
}
return 0;
}
