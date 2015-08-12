#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct node{
		unsigned long long int index;
		struct node *next_adj_edge;
	   };

struct nodetype{
			unsigned long long int value;
			struct node *adj_edge;
			struct nodetype *next;	
	       };
typedef struct node node;
typedef struct nodetype nodetype;

struct levelnode{
			unsigned long long int num;
			unsigned long long int level;
			struct levelnode *front; 
		};
typedef struct levelnode levelnode;  

nodetype* getnodetype(nodetype *);
nodetype* insert_edge(nodetype *,unsigned long long int);
void display(nodetype *);
node* getnode(node *);
nodetype* insert_adj_edge(nodetype *,unsigned long long int,unsigned long long int);
levelnode* getlevelnode(levelnode *);
levelnode* insert(levelnode *,unsigned long long int,unsigned long long int);
void bfs(nodetype *,unsigned long long int);


void display1(levelnode *head){
while(head!=NULL){
printf("%llu %llu\n",head->num,head->level);
head=head->front;
}
}

int main(){
int j;
unsigned long long int m,i=0;
nodetype *edges,*edges1;
edges1=NULL;
edges=NULL;
node *head,*c;
char a[100005];
for(j=0;j<10;j++){
edges1=insert_edge(edges1,j);
}
//display(edges1);
scanf("%s",a);
m=strlen(a);
while(i<=m-1){
edges=insert_edge(edges,i);
if(i>0 && i!=i-1){
edges=insert_adj_edge(edges,i-1,i);
edges=insert_adj_edge(edges,i,i-1);
}
edges1=insert_adj_edge(edges1,a[i]-'0',i);
i++;
//printf("%llu\n",i);
}
while(edges1!=NULL){
head=edges1->adj_edge;
c=head;
while(head!=NULL){
c=c->next;
while(c!=NULL){
if(c->index!=head->index){
edges=insert_adj_edge(edges,head->index,c->index);
edges=insert_adj_edge(edges,c->index,head->index);
}
c=c->next_adj_edge;
}
c=head;
head=head->next_adj_edge;
}
edges1=edges1->next;
}
//display(edges);
bfs(edges,m);
return 0;
}

void bfs(nodetype *edges,unsigned long long k){
nodetype *c;
c=edges;
node *t;
levelnode *head,*s;
head=NULL;
head=insert(head,c->value,0);
s=head;
while(s!=NULL){
while(c->value!=s->num){
c=c->next;
}
t=c->adj_edge;
while(t!=NULL){
head=insert(head,t->index,s->level+1);
t=t->next_adj_edge;
}
if(s->num==k-1){
//display1(head);
printf("%llu\n",s->level);
break;
}
s=s->front;
c=edges;
}
}

levelnode* getlevelnode(levelnode *tmp){
tmp=(levelnode *)malloc(sizeof(levelnode));
tmp->front=NULL;
return tmp;
}

levelnode* insert(levelnode *head,unsigned long long int c,unsigned long long int l){
levelnode *t,*temp,*s;
t=head;
s=head;
if(head==NULL){
head=getlevelnode(head);
head->num=c;
head->level=l;
t=head;
}else{
while(t->front!=NULL){
t=t->front;
}
while(s!=NULL){
if(s->num==c){
return head;
}
s=s->front;
}
temp=getlevelnode(temp);
t->front=temp;
temp->num=c;
temp->level=l;
}
return head;
}

nodetype* getnodetype(nodetype *tmp){
tmp=(nodetype *)malloc(sizeof(nodetype));
tmp->adj_edge=NULL;
tmp->next=NULL;
return tmp;
}

nodetype* insert_edge(nodetype *edges,unsigned long long int c){
nodetype *t,*temp;
t=edges;
if(edges==NULL){
edges=getnodetype(edges);
edges->value=c;
t=edges;
}else{
while(t->next!=NULL){
t=t->next;
}
temp=getnodetype(temp);
t->next=temp;
temp->value=c;
}
return edges;
}



node* getnode(node *tmp){
tmp=(node *)malloc(sizeof(node));
tmp->next_adj_edge=NULL;
return tmp;
}

nodetype* insert_adj_edge(nodetype *edges,unsigned long long int c,unsigned long long int d){
nodetype *m;
node *tp,*t;
m=edges;
while(m->value!=c){
m=m->next;
}
tp=m->adj_edge;
if(tp==NULL){
t=getnode(t);
t->index=d;
m->adj_edge=t;
}else{
while(tp->next_adj_edge!=NULL){
tp=tp->next_adj_edge;
}
t=getnode(t);
t->index=d;
tp->next_adj_edge=t;
}
return edges;
}


void display(nodetype *edges){
node *head;
nodetype *temp;
temp=edges;
while(temp!=NULL){
printf("%llu->",temp->value);
head=temp->adj_edge;
while(head!=NULL){
printf("%llu ",head->index);
head=head->next_adj_edge;
}
printf("\n");
temp=temp->next;
}
}
