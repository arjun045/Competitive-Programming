#include<stdio.h>
#include<malloc.h>

main(){
/*int *a,*b;
a=(int *)malloc(sizeof(int)*1000);
b=(int *)malloc(sizeof(int)*1000);
int x,i;
scanf("%d",&x);
for(i=0;i<x;i++){
a[i]=i+1;
b[i]=0;
}
*/
int x,i=4,b,j;
scanf("%d",&x);
for(j=0;j<x;j++){
b=j<<1;
printf("%d\n",b);
}
}
