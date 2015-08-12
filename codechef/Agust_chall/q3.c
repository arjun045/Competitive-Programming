#include<stdio.h>

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

long int min(long int a,long int b){
if(a>b) return b;
else return a;
}

void quicksort(long int first,long int last,long int *x,long int *y){
   long int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
		temp=y[i];
		y[i]=y[j];
		y[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         temp=y[pivot];
         y[pivot]=y[j];
         y[j]=temp;
         quicksort(first,j-1,x,y);
         quicksort(j+1,last,x,y);

    }
}

int main(){
long int N,M,i,e,f,a[100001],b[100001],c[100001],d[100001],g[100001]={0};
a[1]=0;
b[1]=1;
N=scan(),M=scan();
for(i=2;i<=M;i++){
a[i]=300001;
b[i]=i;
}
for(i=1;i<=M;i++){
e=scan(),f=scan();
if(e!=f){
c[i]=e,d[i]=f;
a[e]=min(a[f]+1,a[e]);
a[f]=min(a[e]+1,a[f]);
}
}
for(i=0;i<=M;i++)
g[a[i]]++;
quicksort(1,M,a,b);
quicksort(1,M,c,d);
//for(i=1;i<=M;i++){
//printf("%li %li %li %li %li\n",a[i],b[i],c[i],d[i],g[i]);
//}
for(i=1;i<=M;i++){
if(g[a[i]]==1 && )
}
return 0;
}
