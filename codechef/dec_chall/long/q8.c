#include<stdio.h>
#define oo 100000001
 
int solve(int a[],int n);
void fill(int f[][100],int n,int a[]);
 
//main begins
int main ()
{
 int n,a[100],i,ans;
 scanf("%d",&n);
 for(i=0;i<n;++i)
    scanf("%d",&a[i]);
ans = solve(a,n);
printf("%d\n",ans);
return 0;
}
int solve(int a[],int n)
{
 int i,j,f[100][100];
 for(i=0;i<n;++i)
  {
   for(j=0;j<n;++j)
     {
      if(i>=j)    
      f[i][j] = 0;    
     }
 }
  fill(f,n,a);
  /*for(i=0;i<n;++i)
    {
      printf("%d-->",i);
      for(j=0;j<n;++j)
    {
      printf("%d ",f[i][j]);
    }
    printf("\n");
  }*/
  return (f[0][n-1] + 1);   
}
//filling table(f[i][j] = number of balanced bracket pair from i to j in modified array) bottom up//
void fill(int f[][100],int n,int a[])
{
 int i,j,diff,k,sum = 0;
 for(diff = 1;diff < n;++diff)
   for(i = 0;i < n-diff;++i)
     {
      j = i + diff;
     if(diff == 1)
     {
      //printf("i%d %d j%d %d\n",i,a[i],j,a[j]);
       if((a[j] > a[i]) && (a[j] + a[i] == 0))
         f[i][j] = 1;
       else
         f[i][j] = 0;
     }
     else
     {
       sum = f[i][j-1];
      for(k=i;k<j;++k)
         {
          if((a[j] > a[k]) && (a[k] + a[j] == 0))
         {
          sum += 1;
          sum += f[k+1][j-1];
          sum %= 1000000007;
          if(k != 0)
          {
            sum += f[i][k-1]*(1+f[k+1][j-1]);
            sum %= 1000000007;
          }
         }
        } 
      f[i][j] = sum%1000000007;    
     }
    }  
 return;
} 
