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
long int T,N,M,a[101],i,k;
long int count,s;
T=scan();
while(T--){
k=-1;
N=scan(),M=scan();
count=M;
for(i=0;i<N;i++){
a[i]=scan();
if(k<a[i])
k=a[i];
}
//printf("k is %d\n",k);
for(i=0;i<N;i++){
s=(k-a[i]);
count=count-s;
}
//printf("count is %li\n",count);
if(count%N==0)
printf("Yes\n");
else
printf("No\n");
}
return 0;
}
