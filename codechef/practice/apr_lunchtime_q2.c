#include<stdio.h>
void quicksort(unsigned long long int *,int ,int );
int main(){
int t;
unsigned long long int a[20000],i,n,product=1,*b;
scanf("%d",&t);
while(t--){
scanf("%llu",&n);
for(i=0;i<n;i++){
scanf("%llu",&a[i]);
product=(product*a[i])%1000000007;
}
product=product%1000000007;
quicksort(a,0,n-1);
for(i=1;i<=a[n-1];i++){
if(product%i==0 && a[n-1]%i==0)
product=product/i;
}
for(i=1;i<=a[n-2];i++){
if(product%i==0 && a[n-2]%i==0)
product=product/i;
}
printf("%llu\n",product);
product=1;
}
return 0;
}

void quicksort(unsigned long long int *x,int first,int last){
    int pivot,j,temp,i;

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
