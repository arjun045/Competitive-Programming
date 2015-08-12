#include <stdio.h>
#include <stdlib.h>
 
#define ARRAYSIZE(a) (sizeof(a))/(sizeof(a[0]))
 
int setsize,setarr[100002],k1;
static int total_nodes;
// prints subset found
void printSubset(int A[], int size)
{
    int i;
 
    if(k1==0)
    {
    setsize=size;
    for(i = 0; i < size; i++)
        setarr[i]=A[i];
        k1++;
    }
 
 
    }
 
// inputs
// s            - set vector
// t            - tuplet vector
// s_size       - set size
// t_size       - tuplet size so far
// sum          - sum so far
// ite          - nodes count
// target_sum   - sum to be found
void subset_sum(int s[], int t[],
                int s_size, int t_size,
                unsigned long long sum, int ite,
                int const target_sum)
{
    total_nodes++;
    if((sum>0)&&(sum%target_sum==0 ))
    {
        // We found subset
        printSubset(t, t_size);
        // Exclude previously added item and consider next candidate
     //   subset_sum(s, t, s_size, t_size-1, sum - s[ite], ite + 1, target_sum);
        return;
    }
    else
    {
        int i;
        // generate nodes along the breadth
        for( i = ite; i < s_size; i++ )
        {
            t[t_size] = s[i];
            // consider next level node (along depth)
            subset_sum(s, t, s_size, t_size + 1, sum + s[i], i + 1, target_sum);
        }
    }
}
 
// Wrapper to print subsets that sum to target_sum
// input is weights vector and target_sum
void generateSubsets(int s[], int size, int target_sum)
{
    int *tuplet_vector = (int *)malloc(size * sizeof(int));
 
    subset_sum(s, tuplet_vector, size, 0, 0, 0, target_sum);
 
    free(tuplet_vector);
}
 
int main()
{
    int weights[100002],i,t,size;
scanf("%d",&t);
while(t--)
{
    k1=0;
    setsize=0;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
    scanf("%d",&weights[i]);
    }
    generateSubsets(weights, size,size);
  //  printf("Nodes generated %d\n", total_nodes);
if(setsize==0)
printf("-1\n");
else
{
    printf("%d\n",setsize);
    int k;
    k=0;
for(i=0;i<size;i++)
{
    if(k==setsize)
    break;
if(weights[i]==setarr[k])
    {
        printf("%d ",i+1);
    k++;
    }
}
printf("\n");
}
}
    return 0;
 
}
