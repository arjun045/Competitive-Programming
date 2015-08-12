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
long long int k,N,i,M,a[100004],d,s=1;
char ch;
N=scan(),M=scan();
for(i=1;i<=N;i++){
a[i]=scan();
}

for(i=0;i<M;i++){
scanf(" %c %lli",&ch,&d);
if(ch=='R'){
d=d%(N+1);
if(d==0)
d=1;
k=s+d-1;
if(k>N){
k=k-N;
}
printf("%lli\n",a[k]);
}else if(ch=='A'){
d=d%N;
s=s-d;
if(s<=0){
s=N+s;
}
}else{
d=d%N;
s=s+d;
if(s>N){
s=s-N;
}
}
}
return 0;
}
