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
int T,a[200000],j;
unsigned long long int i,n,t=0,k,s=1;
T=scan();
while(T--){
n=scan();
for(i=0;i<n;i++){
a[i]=scan();
s=s*2;
}
//printf("%llu\n",s);
if(n!=1){
for(j=-100;j<101;j++){
for(k=0;k<n-1;k++){
for(i=k+1;i<n;i++){
if(a[k]+j==a[i]){
t++;
}
}
}
t=t%1000000007;
}
t=(s-t-1-n)%1000000007;
printf("%llu\n",t);
t=0;
}else
printf("0\n");
s=1;
}
return 0;
}
