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
long int a[103],P,i,N,count;
T=scan();
while(T--){
count=0;
N=scan(),P=scan();
for(i=0;i<N;i++){
a[i]=scan();
}
for(i=0;i<N;i++){
if(P>a[i]){
break;
}else{
count++;
}
}
printf("%li\n",count);
}
return 0;
}
