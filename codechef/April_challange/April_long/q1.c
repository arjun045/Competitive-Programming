#include<stdio.h>
#include<malloc.h>
struct node{
		unsigned long int value;
		struct node *next;
	   };
typedef struct node node;
node* getnode(node *);
node* insert(node *,unsigned long int);
void display(node *);


int main(){
unsigned long int N,i,count=0,x,y;
node *head,*s;
head=NULL;
head=(node *)malloc(sizeof(node));
head->next=NULL;
head->value=3;
s=head;
unsigned long int T;
for(i=5;i<=2100;i++){
if(i%2!=0){
while(s!=NULL){
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
//display(head);
scanf("%lu",&T);
while(T--){
s=head;
scanf("%lu%lu",&x,&y);
while(s!=NULL){
if(s->value>x+y){
printf("%lu\n",s->value-x-y);
break;
}
s=s->next;
}
}
return 0;
}

node* insert(node *head,unsigned long int i){
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
printf("%lu ",head->value);
head=head->next;
}
}
