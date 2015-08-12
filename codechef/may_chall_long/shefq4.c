#include<stdio.h>
#include<malloc.h>
int** reserveMemory(int,int);
main()
{
unsigned long long int n,m,p,i,j,k,l;
long long int cost=0;
int **a;

a=reserveMemory(100000,100000);
scanf("%llu%llu%llu",&n,&m,&p);
for(i=0;i<n;i++){
for(l=0;l<m;l++){
*(a+)=l+1;
}
}




for(i=0;i<p;i++){
scanf("%llu%llu",&j,&k);
a[j-1][k-1]=a[j-1][k-1]+1;
}

//for(i=0;i<n;i++){
//for(l=0;l<m;l++){
//printf("%d ",a[i][l]);
//}
//printf("\n");
//}

for(i=0;i<n;i++){
for(l=m-1;l>0;l--){
if(a[i][l]>=a[i][l-1]){
cost=cost+a[i][l]-a[i][l-1];
}else{
cost=-1;
break;
}
}
printf("%lli\n",cost);
cost=0;
}
}

int** reserveMemory(int rows, int column){
int **array,*data;
int i;
array =(int**)malloc(rows*sizeof(int *));
data=(int*)malloc(rows*column*sizeof(int));
for(i=0;i<rows;i++)
array[i]=data + i*column;
return array;
}

