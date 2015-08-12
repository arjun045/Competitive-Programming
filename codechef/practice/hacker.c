#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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


int main() {
int T,P,i,j;
long int count;
double a[51],b[51];
    char c[5],d[5];
    scanf("%d",&T);
    while(T--){
        scanf("%d",&P);
        for(i=0;i<P;i++){
            scanf("%s %s",c,d);
            c[2]='.';
            d[2]='.';
            a[i]=atof(c);
	    b[i]=atof(d);
		if(a[i]<8)
		a[i]=a[i]+12;
		if(b[i]<8)
		b[i]=b[i]+12;        
	}
   quicksort(*b ,*a,0,P-1);
for(i=0;i<=P-1;i++){
for(j=i+1;j<P;j++){
if(a[j]<=b[i] && b[i]<=b[j]){
}else{
count++;
i=j-1;
break;
}
}
}
printf("%li\n",count);          
    }
    return 0;
}
