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

void quicksort(long long int *x,long long int *y,long long int first,long long int last){
   long long int pivot,j,temp,i;

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
         quicksort(x,y,first,j-1);
         quicksort(x,y,j+1,last);

    }
}

void insertion_sort(long long int *a,long long int *b,long long int last){
long long int i,temp,temp1,j;
for(i=1;i<last;i++){
      temp=a[i];
	temp1=b[i];
      j=i-1;
      while((temp<a[j])&&(j>=0)){
      a[j+1]=a[j];
	b[j+1]=b[j];
          j=j-1;
      }
      a[j+1]=temp;
	b[j+1]=temp1;
  }
}

int main(){
long long int j,T,N,i,a[100001],b[100001],count;
T=scan();
while(T--){
count=1;
N=scan();
for(i=0;i<N;i++)
a[i]=scan(),b[i]=scan();
//quicksort(b,a,0,N-1);
//insertion_sort(b,a,N);

for(i=0;i<=N-1;i++){
for(j=i+1;j<N;j++){
if(a[j]<=b[i] && b[i]<=b[j]){
}else{
count++;
i=j-1;
break;
}
}
}
printf("%lli\n",count);
}
return 0;
}
