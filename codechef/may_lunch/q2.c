#include<stdio.h>
int main()
{
int T;
unsigned long int N,j;
unsigned long long int K,a[100000],t=0,i,count=0;
long long int min,m;
scanf("%d",&T); 
while(T--){
scanf("%lu%llu",&N,&K);
for(i=0;i<N;i++)
scanf("%llu",&a[i]);

min=a[0]+a[1]-K;
if(min<0)
min=min*-1;



for(i=0;i<N;i++){
for(j=i+1;j<N;j++){
m=a[i]+a[j]-K;
if(m<0){
m=m*-1;
}
if(m==min)
count++;
else if(m<min){
min=m;
count=0;
}
}
}


printf("%lli %llu\n",min,count);
count=0;
}
return 0;
}

