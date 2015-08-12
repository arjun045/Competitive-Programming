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
int T,N;
long int a[50]={0},c,i,d;
a[1]=1;
for(i=2;i<=40;i++){
a[i]=a[i-1]^i;
}
T=scan();
while(T--){
N=scan();
for(i=0;i<N;i++){
c=scan(),d=scan();
}
printf("%li\n",a[N]);
}
return 0;
}
