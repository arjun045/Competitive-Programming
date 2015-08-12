#include<stdio.h>
inline int read_int()
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

int main()
{
int T,N,M,C[40],j,i,h=0,o=0;
unsigned long long int P[40],t=1,counter,count=0,price=0;
double f;
T=read_int(); 
while(T--){
N=read_int();
M=read_int();
for(i=0;i<N;i++){
C[i]=read_int();
scanf("%llu",&P[i]);
t=t*2;
}

for(counter=1;counter<t;counter++){
for(j=0;j<N;j++){
if(counter & (1<<j)){
price=price+P[j];
h++;
}
}
if(h>=M){
o++;
count=count+price;
}
h=0;
price=0;
}
f=count/(double)o;
printf("%lf\n",f);
count=0;
o=0;
}
return 0;
}
