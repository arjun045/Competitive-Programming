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
long long int N,i,num,max;
T=scan();
while(T--){
long long int a[100001]={0};
scanf("%lli",&N);
for(i=0;i<N;i++){
num=scan();
a[num]++;
}
max=a[0];
for(i=1;i<100001;i++){
if(max<a[i])
max=a[i];
}
printf("%lli\n",N-max);
}
return 0;
}
