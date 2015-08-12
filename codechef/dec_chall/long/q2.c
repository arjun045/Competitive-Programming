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
int T;
long long int a[100001],count,i,N;
T=scan();
while(T--){
int b[100001]={0};
count=0;
N=scan();
for(i=0;i<N;i++){
a[i]=scan();
b[a[i]]=1;
}
for(i=0;i<100001;i++){
if(b[i]==1){
count++;
}
}
printf("%lli\n",count);
}
return 0;
}
