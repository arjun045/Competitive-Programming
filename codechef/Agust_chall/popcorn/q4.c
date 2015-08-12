#include<stdio.h>
int main(){

int T,i;
unsigned long long int N,a[9]={0,0,6,96,558,2365,8550,27111,77496};
scanf("%d",&T);
while(T--){
scanf("%llu",&N);
for(i=0;i<10;i++){
if(N<=a[i]){
printf("%d\n",i);
break;
}
}
}
return 0;

}
