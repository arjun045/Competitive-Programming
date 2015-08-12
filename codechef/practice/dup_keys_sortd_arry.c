/* Given a sorted array having duplicate elements,how would you find first index of a given element in O(logn)   */
#include<stdio.h>
#include<malloc.h>

main(){
int n,*a,search,mid,i,f,l;
a=(int *)malloc(sizeof(int)*n);
printf("No of elements u want to enter:\n");
scanf("%d",&n);
printf("Enter the element in sorted order\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
f=0;
l=n-1;
mid=(f+l)/2;
printf("Enter the elements u want to search\n");
scanf("%d",&search);
i=-3;
while(f<=l){
//printf("%d %d\n",a[mid],mid);
if(a[mid]>search){
l=mid-1;
}
else if(a[mid]<search){
f=mid+1;
}else{
l=mid-1;
i=mid;
}
mid=(f+l)/2;
//printf("%d %d\n",a[mid],mid);
}
if(i<0)
printf("No Dosen't exist\n");
else
printf("%d %d\n",a[i],i);
}

