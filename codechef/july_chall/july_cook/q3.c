#include<stdio.h>
#include<string.h>
int main(){
unsigned long long int count=0,t,b[2001],c[2001],l;
long int N,i,j,k;
char a[2001][2001];
scanf("%li",&N);
for(i=0;i<N;i++)
scanf("%s",a[i]);
for(i=0;i<N;i++){
t=0;l=0;
for(j=0;j<N;j++){
if(i!=j){
if(a[i][j]-'0'==1){
b[t++]=j;
}else{
c[l++]=j;
}
}
}
for(j=0;j<l;j++){
for(k=0;k<t;k++){
if(a[c[j]][b[k]]-'0'==1){
count++;
break;
}
}
}
}
printf("%llu\n",count);
return 0;
}
