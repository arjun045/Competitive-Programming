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
unsigned long long int T,N;
T=scan();
while(T--){
N=scan();
printf("%llu\n",N-1);
}
return 0;
}
