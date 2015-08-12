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
long long int T;

for(i=0;i<50;i++)
b[i]=i+1;
T=scan();
while(T--){
n=scanf();
for(i=0;i<N;i++){
a[i]=scan();
sum=sum+a[i];
}
for(i=0;i<N;i++){
if(a[i]>=N){
printf("-1\n");
k=1;
break;
}
}
}
if(k==0){
if(sum>N)
printf("-1\n");
}
count=(N*(N-1))/2;
i=0;
while(c[i]--){
printf("%lli ",i+2);
}

printf("1\n");
}
return 0;
}
