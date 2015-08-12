#include<stdio.h>

int main(){
long int N,a[100001],count=0,t,i;
scanf("%li",&N);
for(i=0;i<N;i++)
scanf("%li",&a[i]);
t=0;
for(i=1;i<N;i++){
if(a[t]>a[i+1]){
count++;
}else{
t=i;
}
}
printf("%li\n",N-count);
return 0;
}
