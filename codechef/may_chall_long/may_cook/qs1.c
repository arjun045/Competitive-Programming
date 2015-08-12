#include<stdio.h>

int main(){
int t;
unsigned long long int n,i,a[100000],temp;
scanf("%d",&t);
while(t--){
scanf("%llu",&n);
for(i=0;i<n;i++)
scanf("%llu",&a[i]);

for(i=0;i<n-1;i++){
if(i%2==0 && a[i]>a[i+1]){
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}else if(i%2!=0 && a[i]<a[i+1]){
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
printf("%llu",a[0]);
for(i=1;i<n;i++)
printf(" %llu",a[i]);
printf("\n");
}
return 0;
}
