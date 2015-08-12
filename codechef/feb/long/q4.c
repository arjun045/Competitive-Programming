#include<stdio.h>
#include<string.h>
int main(){
char a[1000001],b,c,d[4][1000001];
long long int i,Q,L,R,n;
scanf("%s",a);
n=strlen(a);
d[0][0]=0;
d[1][0]=0;
d[2][0]=0;
d[3][0]=0;

for(i=0;i<n;i++){
if(a[i]=='c')
d[0][d[0][0]++]=i;
else if(a[i]=='e')
d[0][d[1][0]++]=i;
else if(a[i]=='f')
d[0][d[2][0]++]=i;
else
d[0][d[3][0]++]=i;
}

scanf("%lli",&Q);
for(i=0;i<Q;i++){
scanf(" %c %c %lli %lli",&b,&c,&L,&R);

}
return 0;
}
