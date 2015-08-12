#include<stdio.h>
int main(){
int j;
long int a[26];
long int T,k,l,u,f,t,A,B,i,count;
scanf("%li",&T);
a[0]=1;
for(i=1;i<=25;i++){
a[i]=a[i-1]*2;
}
while(T--){
k=-1,l=-1,j=0,count=0;
scanf("%li %li",&A,&B);

for(i=0;i<=25;i++){
if(a[i]==A)
k=i;
if(a[i]==B)
l=i;
}

if(k!=-1){
t=l-k;
if(t<0)
t=t*-1;
printf("%li\n",t);
}else{
u=A;
//printf("hy\n");
while(u>1){
//printf("u is %li\n",u);
count++;
if(u%2==0){
u=u/2;
}else{
u=(u-1)/2;
}

for(i=0;i<=25;i++){
if(a[i]==u){
k=i;
j=1;
break;
}
}

if(j==1){
break;
}
}
//printf("%li %li\n",k,l);
t=l-k;
if(t<0)
t=t*-1;
printf("%li\n",t+count);

}
}
return 0;
}
