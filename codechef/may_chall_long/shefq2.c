#include<stdio.h>
int main()
{
unsigned long long int N,k,i,m=0,n=0,j;
long long int A[100000],x;
scanf("%llu%llu",&N,&k);
for(i=0;i<N;i++)
scanf("%lli",&A[i]);
for(i=0;i<N;i++){
if(A[m]<A[i])
m=i;
if(A[n]>A[i])
n=i;
}
if(k%2==0 && k!=0){
x=A[n];
for(i=0;i<N;i++){
A[i]=A[i]-x;
}
}else if(k==0){
A[i]=A[i];
}else{
x=A[m];
for(i=0;i<N;i++){
A[i]=x-A[i];
}
}

printf("%lli",A[0]);
for(i=1;i<N;i++)
printf(" %lli",A[i]);
return 0;
}
