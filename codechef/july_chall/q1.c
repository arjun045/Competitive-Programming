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
char s[100003];
unsigned long long int i,count=0,T,N;
T=scan();
while(T--){
N=scan();
scanf("%s",s);
for(i=0;i<N;i++){
if(s[i]=='1'){
count++;
}
}
printf("%llu\n",count+(count*(count-1))/2);
count=0;
}
return 0;
}
