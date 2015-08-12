#include<stdio.h>
int main(int argc,char *argv[]){
double C,F,X,f_time,t_time,time;
int T;
long int s=0,cok_num;
//FILE *fo,*fi;
//fi=fopen(argv[1],"r");
//fo=fopen(argv[2],"w");
scanf("%d",&T);
//fscanf(fi,"%d",&T);
while(T--){
cok_num=2;
s++;
//fscanf(fi,"%lf %lf %lf",&C,&F,&X);
scanf("%lf %lf %lf",&C,&F,&X);

t_time=X/2;
f_time=C/2;
printf("%lf %lf\n",f_time,t_time);
while(1){
cok_num=cok_num+F;
time=X/cok_num;
if(t_time>=f_time+time){
t_time=f_time+time;
f_time=C/cok_num+f_time;
}else{
//printf("%.7lf\n",f_time+time);
break;
}
//printf("%.7lf\n",t_time);
}
//fprintf(fo,"Case #%li: %.7lf\n",s,t_time);
printf("Case #%li: %.7lf\n",s,t_time);
}
return 0;
}
