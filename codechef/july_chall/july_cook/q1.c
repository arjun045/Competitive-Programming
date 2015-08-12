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
long long int N,a[100004],b[100001],count=0,i;
T=scan();
while(T--){
for(i=0;i<100001;i++)
b[i]=0;
N=scan();
for(i=0;i<N;i++){
a[i]=scan();
if(b[a[i]]==0){
b[a[i]]=1;
count++;
}
}
printf("%lli\n",count);
count=0;
}
return 0;
}
