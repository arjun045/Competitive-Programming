#include<stdio.h>
long int a[10001];
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

long int cmp(const void *a,const void *b)
{
	return (*(int*)a-*(int*)b);
}
/*long int maxpos(long int N){
int i,k;
for(i=9;i>=0;i--){
if(a[N-1]&(1<<i)){
k=i;
break;
}
}
return k;
}*/

void gaussian_elemination(){
long int k,i,j,temp;
k=1000;
for(i=9;i>=0;){
if(a[k]!=0 && (a[k]&(1<<i))){
for(j=k-1;j>=0;j--){
if(a[j]!=0 && (a[j]&(1<<i))){
a[j]=a[k]^a[j];
}
}
i--;k--;
}else{
for(j=k-1;j>=0;j--){
if((a[j]!=0) && a[j]&(1<<i)){
temp=a[j];
a[j]=a[k];
a[k]=temp;
break;
}
i--;
}
}
}
}

int main(){
long int r,K,N,i,xor,k,pos,max,b;
int T,j;
T=scan();
while(T--){
N=scan(),K=scan();
max=0;
for(i=0;i<N;i++){
r=scan();
a[r]=r;
}
max=0;
for(i=1000;i>=0;i--){
if(a[i]!=0 && max<(a[i]^K)){
max=a[i]^K;
k=i;
}
}
a[max]=max;
a[k]=0;

//qsort(a,N,sizeof(long int),cmp);
//pos=maxpos(N);
//printf("hello");
gaussian_elemination();
xor=0;
for(i=1000;i>=0;i--){
b=xor^a[i];
if(xor<b){
xor=b;
}
}
printf("%li\n",xor);
}
return 0;
}
