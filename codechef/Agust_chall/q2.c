#include<stdio.h>

int main(){
long long int T,X,Y,s;
scanf("%lli",&T);
while(T--){
s=0;
 scanf("%lli %lli",&X,&Y);
if(X>0){
 if(X%2!=0){ 
   if(Y%2==0){
   s=1;
   }
   if(Y<0 && Y>=-1*(X-1)){
   s=1;
   }
   if(Y>0 && Y<=X+1){
   s=1;
   }
 }else{
   if(Y>0 && Y%2==0 && Y>=2+X){
   s=1;
   }
   if(Y<0 && Y%2==0 && -1*Y>=X){
   s=1;
   }
  }
 }else{
  if(X%2==0){
if(Y%2==0){
s=1;
}
if(Y<0 && Y>=X){
s=1;
}
if(Y>0 && Y<=-1*X){
s=1;
}
}else{
if(Y>0 && Y>=-(X-1) && Y%2==0){
s=1;
}
if(Y<0 && -1*Y>=-1*(X-1) && Y%2==0){
s=1;
}
}
}
if(s==1)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}
