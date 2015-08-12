#include<stdio.h>
#include<malloc.h>

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
long long int N;
inline void quicksort(long long int *x,long long int first,long long int last){
   long long int pivot,pi,temp,i;

     if(first<last){
         pivot=x[last];
         pi=first;

         for(i=first;i<=last-1;i++){
	     
             if(pivot>=x[i]){
                 temp=x[i];
                  x[i]=x[pi];
                  x[pi]=temp;
			pi++;
             }
         }
         temp=x[last];
         x[last]=x[pi];
         x[pi]=temp;
         quicksort(x,first,pi-1);
         quicksort(x,pi+1,last);

    }
}

long long int search(long long int *h,long long int d){
long long int first=0,last=N-1,mid;
int s=0;
while(first<last){
mid=(first+last)/2;
if(h[mid]>d){
last=mid-1;
}else if(h[mid]<d){
first=mid+1;
}else if(h[mid]==d){
s=1;
return h[mid];
}
}
if(s==0)
return -1;
}

int main(){
long long int *a,d,i,K,b;
int o;
N=scan();
a=(long long int *)malloc(sizeof(long long int)*100000);
for(i=0;i<N;i++){
a[i]=scan();
}
quicksort(a,0,N-1);
//for(i=0;i<N;i++)
//printf("%llu ",a[i]);
K=scan();
for(i=0;i<N;i++){
d=K-a[i];
if(d>0){
b=search(a,d);
if(b>=0){
printf("%lli %lli\n",a[i],b);
o=1;
break;
}
}
}
if(o!=1)
printf("No\n");
return 0;
}
