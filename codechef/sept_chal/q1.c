#include<stdio.h>
void max_heapify(long long int *,long long int);
    void build_max_heap(long long int *,long long int);
    void heapsort(long long int *,long long int);
    void swap(long long int *,long long int *);
    long long int heapsize;

 void heapsort(long long int *arr,long long int len)
 {
   long long int i;
   build_max_heap(arr,len);
    for(i= len-1;i>=1;i--)
   {
    swap(&arr[0],&arr[i]);
    heapsize = heapsize -1;
    max_heapify(arr,0);
   }

 }
void max_heapify(long long int *arr,long long int i)
{
    long long int l=2*i,r=2*i+1,largest;
    if(l<heapsize && arr[l]>arr[i])
        largest = l;
    else
        largest = i;
    if(r<heapsize && arr[r]>arr[largest])
        largest = r;

    if(largest != i)
    {
        swap(&arr[i],&arr[largest]);
        max_heapify(arr,largest);
    }
     }
void build_max_heap(long long int *arr,long long int len)
{
    heapsize = len;
    long long int i;
    for(i =len/2;i>=0;i--)
    {
        max_heapify(arr,i);
    }
}
void swap(long long int *a ,long long int *b)
{
    long long int temp = *a;
    *a= *b;
    *b= temp;
}

int main(){
int T;
long long int N,a[100010],i,sum;
scanf("%d",&T);
while(T--){
sum=0;
scanf("%llu",&N);

for(i=0;i<N;i++){
scanf("%llu",&a[i]);
}
heapsort(a,N);

for(i=N-1;i>=0;i=i-2)
sum=sum+a[i];
printf("%llu\n",sum);
}
return 0;
}
