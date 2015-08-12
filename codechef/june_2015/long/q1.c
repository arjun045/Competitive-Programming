#include<stdio.h>

inline int scan(){
int t=0;
char c;
c=getchar_unlocked();
while(c<'0' || c>'9')
c=getchar_unlocked();
while(c>='0' && c<='9'){
t=(t<<1) +(t<<3) + c - '0';
c=getchar_unlocked();
}
return t;
}

int main(){
long long int T,N,a,i,x,sum;
T=scan();
while(T--){
sum=0;
x=0;
N=scan();
for(i=0;i<N;i++){
a=scan();
if((a-x)>0){
sum=sum+a-x;
}
x=a;
}
printf("%lli\n",sum);
}
return 0;
}
