#include<stdio.h>

int main(int argc,char *argv[]){
int f,g=0,a[4][4],b[4][4],i,j,N,D,T,k;
FILE *fi,*fo;
fi=fopen(argv[1],"r");
fo=fopen(argv[2],"w");
fscanf(fi,"%d",&T);
while(T--){
f=0;
g++;
fscanf(fi,"%d",&N);
for(i=0;i<4;i++){
for(j=0;j<4;j++){
fscanf(fi,"%d",&a[i][j]);
}
}
fscanf(fi,"%d",&D);
for(i=0;i<4;i++){
for(j=0;j<4;j++){
fscanf(fi,"%d",&b[i][j]);
}
}
for(j=0;j<4;j++){
for(i=0;i<4;i++){
if(a[N-1][i]==b[D-1][j]){
f++;
k=a[N-1][i];
}
}
}
if(f==1){
fprintf(fo,"Case #%d: %d\n",g,k);
}else if(f==0){
fprintf(fo,"Case #%d: Volunteer cheated!\n",g);
}else{
fprintf(fo,"Case #%d: Bad magician!\n",g);
}
}
fclose(fi);
fclose(fo);
return 0;
}
