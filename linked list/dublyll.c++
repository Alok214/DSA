#include<iostream>
using namespace std;
struct node
{
   int d;
   node *next;
   node *pre;
   node(int x){
     d=x;
     next=NULL;
     pre=NULL;
   }

};
node *insertBig(node *head,int x){
    node *t=new node(x);
    if(head==NULL) return t;
    t->next=head;
        head->pre=t;
    return t;
}
node *insertEnd(node *head,int x){
    node *p=head;
    node *t=new node(x);
    if(head==NULL) return t;
    while(p->next!=NULL){
       p=p->next;
    }
    p->next=t;
    t->pre=p;
    return head;
}
void print(node *head){
    // node *t=head;
    while (head!=NULL)
    {
        cout<<head->d<<" ";
        head=head->next;
    } 
}
node *delBig(node*head){
    if(head==NULL) return NULL;
    head=head->next;
    delete(head->pre);
    head->pre=NULL;
    return head;
}
node *delLast(node*head){
    if(head==NULL) return NULL;
    node *t=head,*p=NULL;
    while (t->next!=NULL){
        t=t->next;
    }
    p=t->pre;
    p->next=NULL;
    delete(t);
    return head;
}
int main(){
node *head=NULL;
head=insertBig(head,3);
head=insertBig(head,5);
head=insertBig(head,8);
head=insertEnd(head,18);
head=insertEnd(head,28);
head=delBig(head);
head=insertBig(head,15);
head=delLast(head);
print(head);
cout<<endl;
}