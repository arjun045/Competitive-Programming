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
int T,N,K,i,b,s,count;
T=scan();
while(T--){
count=0;
s=0;
N=scan(),K=scan();
for(i=0;i<N;i++){
b=scan();
if(b%2==0){
count++;
}else{
s=1;
}
}
if(K==0 && s==1)
printf("YES\n");
else if(K==0 && s==0)
printf("NO\n");
if(count>=K && K!=0)
printf("YES\n");
else if(K!=0 && count<K)
printf("NO\n");
}
return 0;
}
