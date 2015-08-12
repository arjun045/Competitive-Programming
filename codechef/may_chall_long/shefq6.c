#include<stdio.h>
int gcd(int,int);
main()
{
int a[100],b[100];
int i,t,n,s;
scanf("%d",&t);
while(t--){
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
s=a[0];
for(i=0;i<n-1;i++){
s=gcd(s,a[i+1]);
if(s==1)
break;
}
}
}

int gcd(int a,int b){
int m,i;
if(a>b)
m=b;
else
m=a;
for(i=m;i>0;i--){
if(a%i==0 && b%i==0)
break;
}
printf("%d ",i);
return i;
}
/*int gcd(int a,int b){
int r,s;
if(a<0)
a=a*-1;
else if(b<0)
b=b*-1;
else if(a<0 && b<0){
a=a*-1;
b=b*-1;
}
if(a>b && a!=0 && b!=0){
do{
r=a%b;
if(r==0){
s=0;r=b;
}else{
s=b%r;
a=r;b=s;
}
}while(s!=0);
}else if(a<b && a!=0 && b!=0){
do{
r=b%a;
if(r==0){
s=0;r=a;
}else{
s=a%r;
b=r;a=s;
}
}while(s!=0);
}
if(a==0)
r=b;
else if(b==0)
r=a;
return r;
}*/
