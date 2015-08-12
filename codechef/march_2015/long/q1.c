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
long long int T,a,b,X,Y,K,i,j,N;
int p;
T=scan();
while(T--){
p=0;
X=scan(),Y=scan(),K=scan(),N=scan();
j=X-Y;
for(i=0;i<N;i++){
a=scan(),b=scan();
if(j<=a && b<=K){
p=1;
}
}
if(p==0){
printf("UnluckyChef\n");
}else{
printf("LuckyChef\n");
}
} 
return 0;
}
