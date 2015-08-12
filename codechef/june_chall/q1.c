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
register unsigned long long int i,N,b=0,count=0,a;
N=scan();
for(i=0;i<N;i++){
a=scan();
if(a!=0){
count++;
}else{
if(b<count){
b=count;
//printf("%llu ",b);
}
count=0;
}
}
if(count==N)
b=count;
printf("%llu\n",b);
return 0;
}
