#include<stdio.h>
int main(){
long int T,i,j,count,x,N,H,a[500000],b[500000];
scanf("%li",&T);
while(T--){
x=10000000;
scanf("%li %li",&N,&H);
for(i=1;i<=N;i++){
scanf("%li %li",&a[i],&b[i]);
}

for(i=0;i<=N-H;i++){
count=H*N;
for(j=1;j<=N;j++){
if((a[j]>(i+H-1) && b[j]>(i+H-1)) || (a[j]<i && b[j]<i)){
//printf("e\n");
}else if(a[j]>=i && b[j]<=(i+H-1)){
//printf("a\n");
count=count-(b[j]-a[j]+1);
}else if(a[j]<i && b[j]>(i+H-1)){
count=count-H;
//printf("b\n");
}else if(a[j]>i && b[j]>(i+H-1)){
count=count-(i+H-a[j]);
//printf("c\n");
}else if(a[j]<i && b[j]<(i+H-1)){
count=count-(b[j]-i+1);
//printf("d\n");
}
}
//printf("%li %li\n",x,count);
if(x>count)
x=count;
}
printf("%li\n",x);
}
return 0;
}
