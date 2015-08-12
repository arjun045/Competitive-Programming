#include<stdio.h>
long long int a[51];

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

void powe(void){
long long int x=1;
int i;
a[0]=1;
for(i=1;i<=50;i++){
a[i]=a[i-1]*2;
}
}

int main(){
powe();
long long int T,S,C,K,i,count;
T=scan();
while(T--){
count=0;
S=scan(),C=scan(),K=scan();

if(S==0 && C==0){
printf("0\n");
}else if(S!=0 && C==0){
if(S-K+1<0){
count=0;
}else{
count=a[S-K+1]+1;
}
}else if(C!=0 && S==0){
if(K==1)
count=a[C];
else
count=0;
}else if(C>S){
if(K>=2 && K<=S){
count=a[S]+1;
}else if(count==1){
count=a[C-S-1]+a[S]+1;
}else{
count=0;
}
}else{


}
printf("%lli\n",count);
}
return 0;
}
