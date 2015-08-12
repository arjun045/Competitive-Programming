#include<stdio.h>
#include<malloc.h>
struct node{
		unsigned long long int value;
		struct node *next;
	   };
typedef struct node node;
node* getnode(node *);
node* insert(node *,unsigned long long int);
void display(node *);

main(){
unsigned long long int N,i,count=0;
node *head,*s;
head=NULL;
head=(node *)malloc(sizeof(node));
head->next=NULL;
head->value=3;
s=head;
scanf("%llu",&N);
for(i=5;i<=N;i++){
if(i%2!=0){
while(s!=NULL){
//display(s);
if(i%s->value==0){
count++;
}
s=s->next;
}
if(count==0){
head=insert(head,i);
}
s=head;
count=0;
}
}
display(head);
}

node* insert(node *head,unsigned long long int i){
node *t,*temp;
t=head;
while(t->next!=NULL){
t=t->next;
}
temp=getnode(temp);
temp->value=i;
t->next=temp;
t=head;
//display(head);
return head;
}

node* getnode(node *tmp){
tmp=(node *)malloc(sizeof(node));
tmp->next=NULL;
return tmp;
}

void display(node *head){
while(head!=NULL){
printf("%llu ",head->value);
head=head->next;
}
}
