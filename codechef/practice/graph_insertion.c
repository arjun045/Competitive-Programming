#include<stdio.h>
#include<malloc.h>

struct node{
		int value;
		struct node *next_adj_edge;
	   };

struct nodetype{
			int edge;
			struct node *adj_edge;
			struct nodetype *next;	
	       };
typedef struct node node;
typedef struct nodetype nodetype;

nodetype* getnodetype(nodetype *);
nodetype* insert_edge(nodetype *,int);
void display(nodetype *);
node* getnode(node *);
nodetype* insert_adj_edge(nodetype *,int,int);



main(){
int n,i,l,j,q,w,co=0;
nodetype *edges,*e;
edges=NULL;
printf("No of edges to be inserted:\n");
scanf("%d",&n);
while(n--){
printf("Enter the vertex:\n");
scanf("%d",&i);
edges=insert_edge(edges,i);
}
e=edges;
printf("No of edges u want to input:\n");
scanf("%d",&l);
for(j=0;j<l;j++){
scanf("%d %d",&q,&w);
while(e!=NULL){
if(e->edge==q || e->edge==w)
co++;
e=e->next;
}
//printf("%d\n",co);
if(co==2)
edges=insert_adj_edge(edges,q,w);
else{
printf("Not a valid edge enter another\n");
j=j-1;
}
e=edges;
co=0;
//display(edges);
}
display(edges);
}


nodetype* getnodetype(nodetype *tmp){
tmp=(nodetype *)malloc(sizeof(nodetype));
tmp->adj_edge=NULL;
tmp->next=NULL;
return tmp;
}

nodetype* insert_edge(nodetype *edges,int c){
nodetype *t,*temp;
//printf("char is %d\n",c);
t=edges;
if(edges==NULL){
edges=getnodetype(edges);
edges->edge=c;
t=edges;
}else{
while(t->next!=NULL){
t=t->next;
}
temp=getnodetype(temp);
t->next=temp;
temp->edge=c;
}
return edges;
}



node* getnode(node *tmp){
tmp=(node *)malloc(sizeof(node));
tmp->next_adj_edge=NULL;
return tmp;
}

nodetype* insert_adj_edge(nodetype *edges,int c,int d){
nodetype *m;
node *tp,*t;
int count=0;
m=edges;
//printf("%d %d\n",c,d);
//t=adj_edges;
while(m->edge!=c){
m=m->next;
}
//printf("%d",m->edge);
tp=m->adj_edge;
if(tp==NULL){
//printf("hello");
t=getnode(t);
t->value=d;
m->adj_edge=t;
}else{
while(tp->next_adj_edge!=NULL){
tp=tp->next_adj_edge;
}
t=getnode(t);
t->value=d;
tp->next_adj_edge=t;
}
//printf("%d",m->adj_edge->value);
//display(edges);
return edges;
}


void display(nodetype *edges){
node *head;
nodetype *temp;
temp=edges;
while(temp!=NULL){
printf("%d->",temp->edge);
head=temp->adj_edge;
while(head!=NULL){
//printf("hy");
printf("%d ",head->value);
head=head->next_adj_edge;
}
printf("\n");
temp=temp->next;
}
}
