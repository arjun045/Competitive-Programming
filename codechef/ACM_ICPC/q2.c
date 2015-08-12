#include<stdio.h>

inline int scan(){
int t=0;
char c;
c=getchar_unlocked();
while(c<'0' || c>'9')
c=getchar_unlocked();
while(c>='0' && c<='9'){
t=(t<<1) +(t<<3) + c - '0';
c=getchar_unlocked();
}
return t;
}

int main(){
int T,M,N,a[100][2];
long long int w[100][100],i,j,k,big,secondbig;
scanf("%d",&T);
while(T--){
scanf("%d %d",&M,&N);
for(i=0;i<M;i++){
for(j=0;j<N;j++){
scanf("%lli",&w[i][j]);
}
}
for(i=0;i<M;i++){
big=w[i][0];
for(j=1;j<N;j++){
        if(big<w[i][j]){
           big=w[i][j];
           a[i][0] = j;
      }
  }

  secondbig=w[i][N-j-1];
  for(j=1;j<N;j++){
      if(secondbig <w[i][j] && j != a[i][0]){
          secondbig =w[i][j];
		a[i][1]=j;	
}
  }
}

}
return 0;
}
