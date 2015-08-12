#include<stdio.h>
#include<math.h>
//double squrt(int );
main()
{
unsigned long int t,b,ls;
double rs_min,rs_max;
scanf("%lu",&t);
while(t--){
scanf("%lu%lu",&b,&ls);
rs_max=sqrt(ls*ls+b*b);
rs_min=sqrt(ls*ls-b*b);
printf("%.5f %.5f\n",rs_min,rs_max);
}
}


/*double squrt(int n){
double i,l,t,k;
int m;
for(i=1;i<40;i++){
if(i*i>n)
break;
}
m=i-1;
l=m;
if(m*m!=n){
t=.1;
k=1;
while(t>.0001){
for(i=t;i<k;i+=t){
if((2*m+i)*i>m){
break;
}
}
l=l+k-(i-t);
printf("%lf\n",l);
t=t/10;
k=k/10;
printf("%lf\n",k-(i-t));
//if(t>.00001)
//break;
m=k-(i-t);
}
}else
return i-1;
}

/*int pow(int i){
i=i*10;
return i;
}*/
