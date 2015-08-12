#include<stdio.h>
char a[100001];

long long int calculate(long long int left,long long int right){

    long long int res,i,found[3],j,last_found[3]={0},sum_found=0,swap[3];
    for(i = left; i <= right; ++i) {
	
        res = a[i-1]-'0' % 3;

        found[(res+0) % 3] = last_found[0] + 1;
        found[(res+1) % 3] = last_found[1];
        found[(res+2) % 3] = last_found[2];

        sum_found += found[0];
	for(j=0;j<3;j++){
        swap[j] = last_found[j];
        last_found[j] = found[j]; 
        found[j] = swap[j];
	}
	}

    return sum_found;

}

int main(){
int e;
long long int l,N,M,i,f,g;
scanf("%lli %lli",&N,&M);
scanf("%s",a);
for(i=0;i<M;i++){
scanf("%d %lli %lli",&e,&f,&g);
if(e==1){
a[f-1]=(char)g+'0';
}else{
l=calculate(f,g);
printf("%lli\n",l);
}
}
return 0;
}
