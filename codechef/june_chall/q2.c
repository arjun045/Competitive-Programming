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
unsigned long long int k=1,l,s,i,r,p,g;
unsigned long long int N,M;
int t;
t=scan();
while(t--){
scanf("%llu%llu",&N,&M);
l=M>>1;

if(N>100000){
g=N-100000;
k=M*g+M*(N-g);
}else{
//printf("%llu %llu\n",M,N);
k=M*N;
}
//printf("%llu\n",l);
/*if(M%2==0 && N%2==0){
s=N*l;
}
else if(M%2!=0 && N%2!=0){
r=(N-1)/2;
s=r*(l+1)+(N-r)*l;
}else if(M%2==0 && N%2!=0){
r=(N-1)/2;
s=r*l+(N-r)*l;
}else if(M%2!=0 && N%2==0){
r=N/2;
s=r*((l<<1)+1);
}

//p=k;
if(s!=0 && k%s==0){
k=k/s;
s=1;
}
printf("%llu/%llu\n",s,k);

*/

/*k=p;
printf("%llu\n",k);
l=k>>1;
s=l;
r=l;
p=k;*/
l=k>>1;
if(l!=0 && k%l==0 ){
k=k/l;
l=1;
}

printf("%llu/%llu\n",l,k);
}
return 0;
}
