#include<stdio.h>
#include<string.h>
#include<stdlib.h>
inline int scan(){
int t=0;
char c;
c=getchar_unlocked();
while(c<'0' || c>'9')
c=getchar_unlocked();
while(c>='0' && c<='9'){
t=(t<<1) +(t<<3) + c - '0';
c=getchar_unlocked();
}
return t;
}

int main(){
int T,a[11][101]={{0}},j,N,n,i,t;
char b[500],* pch;
T=scan();
while(T--){
N=scan();
for(i=1;i<=N;i++){
t=0;
scanf("%[^\n]%*c",b);
pch = strtok (b," ");
while (pch != NULL)
{
a[i][++t]=atoi(pch);
pch = strtok (NULL, " ");
}
a[i][0]=t;
}
for(i=1;i<N;i++){
for(j=1;j<=a[i][0];j++){
printf("%d ",a[i][j]);
}
printf("\n");
}
}
return 0;
}
