#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct node{
		unsigned long long int index;
		struct node *next;
	   };
typedef struct node node;

node* getnode(node *tmp){
tmp=(node *)malloc(sizeof(node));
tmp->next=NULL;
return tmp;
}

void display(node *head){
while(head!=NULL){
printf("%llu ",head->index);
head=head->next;
}
}
node* insert(node *edges,unsigned long long int c){
node *t,*temp;
t=edges;
if(edges==NULL){
edges=getnode(edges);
edges->index=c;
t=edges;
}else{
temp=getnode(temp);
t->next=temp;
temp->index=c;
}
return edges;
}
 
void delete(node *t){
struct node *s;
s=t;
}

main(){
unsigned long long int a,N,i;
node *head,*t;
scanf("%llu",&N);
scanf("%llu",&a);
head=insert(head,a);
t=head;
for(i=1;i<N;i++){
scanf("%llu",&a);
t=insert(t,a);
t=t->next;
}
t=head;
printf("No u want to delete ");
scanf("%llu",&a);
while(t->index!=a){
t=t->next;
}
delete(t);
return 0;
}
