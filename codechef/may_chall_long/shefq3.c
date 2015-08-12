#include<stdio.h>
#include<string.h>
int main(){
unsigned long int T;
unsigned long long int c,i,count=0,count1=0;
long long int j=0;
char a[1000000];
scanf("%lu",&T);
while(T--){
scanf("%s",a);
c=strlen(a);
//printf("%s",a);
for(i=0;i<c;i++){
if(a[i]==60){
j++;
count++;
}else if(a[i]==62){
j--;
if(j==0){
count1=count*2;
}else if(j<0)
break;
}
}
printf("%llu\n",count1);
count=0;
count1=0;
j=0;
}
return 0;
}
