#include<stdio.h>
#include<malloc.h>
struct node{
		unsigned long long int value;
		struct node *next;
           };
typedef struct node node;
node* insert(node *,unsigned long long int);
node* getnode(node *);
void display(node *);
int main()
{
node *head;
int T;
unsigned long long int N,t=1,j,i,sum=0,P[100000],count=0;
scanf("%d",&T); 
while(T--){
head=NULL;
scanf("%llu",&N);
for(i=0;i<N;i++){
scanf("%llu",&P[i]);
t=t*2;
}
if(N==0)
printf("-1\n");
else{
for(i=1;i<t;i++){
for(j=0;j<N;j++){
if(i & (1<<j)){
sum=sum+P[j];
head=insert(head,j+1);
count++;
}
}
if(sum%N==0){
printf("%llu\n",count);
display(head);
break;
}
head=NULL;
sum=0;
count=0;
}
t=1;
}
}
return 0;
}

node* getnode(node *tmp){
tmp=(node *)malloc(sizeof(node));
tmp->next=NULL;
return tmp;
}

node* insert(node *head,unsigned long long int n){
node *s,*temp;
if(head==NULL){
head=getnode(head);
head->value=n;
s=head;
}else{
temp=getnode(temp);
s->next=temp;
temp->value=n;
s=s->next; 
}
return head;
}

void display(node *head){
node *temp;
temp=head;
printf("%llu",temp->value);
temp=temp->next;
while(temp!=NULL){
printf(" %llu",temp->value);
temp=temp->next;
}
printf("\n");
}
