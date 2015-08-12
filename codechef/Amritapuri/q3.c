#include<stdio.h>
#include<string.h>
int main(){
long long int T,S,M,k,l,pos,i,j;
int a[91],g;
char b[2020],c[4]={'C','H','E','F'};
scanf("%lli",&T);
while(T--){
for(i=65;i<=90;i++)
a[i]=4;
scanf("%s",b);
k=strlen(b);
for(i=0;i<k-1;i++){
if(b[i]>=65 && b[i]<=90){
a[b[i]]=k-1-i;
}
}
long long int pos=0,j,f;
while(pos<=k-4){
j=3;
g=0;
l=pos+j;
while(j>=0){
//printf("%c %c\n",b[l],c[j]);
if(b[l]==c[j] || b[l]=='?'){
j--;
l--;
}else{
g=1;
pos=pos+a[b[l]];
//printf("%lli\n",pos);
break;
}
}
if(g==0){
int df=0;
for(i=pos;i<pos+4;i++){
b[i]=c[df++];
}
pos=pos+4;
}
}
for(i=0;i<k;i++){
if(b[i]=='?')
printf("A");
else
printf("%c",b[i]);
}
printf("\n");
}

return 0;
}
