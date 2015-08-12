#include<stdio.h>

void quicksort(long long int *x,long long int first,long long int last){
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
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}


int main(){
long long int T,N,a[100001],b[100001],i,sum;
b[0]=1;
for(i=1;i<100001;i++)
b[i]=(b[i-1]*2)%1000000007;
scanf("%lli",&T);
while(T--){
sum=0;
scanf("%lli",&N);
for(i=0;i<N;i++){
scanf("%lli",&a[i]);
}
quicksort(a,0,N-1);
for(i=0;i<N;i++){
sum=sum+a[i]*(b[i]-b[N-i-1]);
sum=sum%1000000007;
}
printf("%lli\n",sum);
}
return 0;
}
