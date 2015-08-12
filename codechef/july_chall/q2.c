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
int h;
unsigned long int T;
long long int x,y,m;
unsigned long long int count;
T=scan();
while(T--){
x=scan(),y=scan();
if(x<0)
x=x*(-1);
if(y<0)
y=y*(-1);
if(x==y){
printf("%lli\n",x+y);
}else{
if(x>y){
count=2*y;
h=2;
m=x-y;
}else{
count=2*x;
m=y-x;
h=1;
}
if(m%2==0){
m=m/2;
printf("%llu\n",count+m*4);
}else{
m=m/2;
if(h==1)
printf("%llu\n",count+m*4+1);
else if(h==2)
printf("%llu\n",count+m*4+3);
}
}
h=0;
}
return 0;
}
