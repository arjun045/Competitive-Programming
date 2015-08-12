#include<stdio.h>

inline int scan(){
char c;
int t=0;
c=getchar_unlocked();
while(c<'0' || c>'9')
c=getchar_unlocked();
while(c>='0' && c<='9'){
t=(t<<1)+(t<<3) + c -'0';
c=getchar_unlocked();
}
return t;
}

int main(){
long long int T;
int N,i,count,k;
T=scan();
while(T--){
count=0;
int a[101]={0};
N=scan();
for(i=0;i<N;i++){
k=scan();
a[k]=1;
}
for(i=1;i<101;i++){
if(a[i]==1){
count++;
}
}
printf("%d\n",count);
}
return 0;
}
