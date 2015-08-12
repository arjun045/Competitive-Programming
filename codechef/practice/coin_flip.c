#include<stdio.h>
#include<malloc.h>

inline int scan()
{
int ret = 0;
register int c = getchar_unlocked();
while(c<'0' || c>'9')
c = getchar_unlocked();
while(c>='0' && c<='9')
{
ret = (ret<<3) + (ret<<1) + c - '0';
c = getchar_unlocked();
}
return ret;
}

int main(){
int T,i,Q,G,I;
T=scan();
long long int N;
while(T--){
G=scan();
for(i=0;i<G;i++){
I=scan(),N=scan(),Q=scan();
if(N%2==0){
printf("%lli\n",N/2);
}else{
if(Q==I)
printf("%lli\n",N/2);
else
printf("%lli\n",N/2+1);
}
}
}
return 0;
}
