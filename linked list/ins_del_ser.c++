#include<iostream>
using namespace std;
struct node
{
   int d;
   node *next;
   node(int x){
     d=x;
     next=NULL;
   }
};
node *insertAtBeg(node *head,int x){
    node *t=new node(x);
    t->next=head;
    return t;
}
node *insertAtEnd(node *head,int x){
    node *p=head;
    node *t=new node(x);
    if(head==NULL) return t;
    while(p->next!=NULL){
       p=p->next;
    }
    p->next=t;
    return head;
}
node *insertAtPos(node *head,int x,int pos){
    node *p=head;
    node *t=new node(x);
    if(pos==1){
        t->next=head;
        return t;
    }
    //else
    int i=1;
    while(i!=pos-1){
       p=p->next;
       i++;
    if(p==NULL) return head;
    }
    t->next=p->next;
    p->next=t;
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
node * delBig(node *head){
    if(head==NULL) return NULL;
    node *p=head;
    head=head->next;
    delete(p);
    return head;
}
node * delLast(node *head){
    if(head==NULL) return NULL;
    node *p=head,*q=NULL;
    if(head->next==NULL){
        delete(head);
        return NULL;
    }
    while(p->next->next!=NULL){
        p=p->next;
    }
    q=p->next;
    p->next=NULL;
    delete(q);
    return head;
}
node * delPos(node *head,int pos){
    node *t=head,*p=NULL,*q=NULL;
    if(pos==1){
       head=head->next;
       delete(t);
       return head;
    }
    int i=1;
    while (i!=pos-1){
        i++;
        t=t->next;
        if(t==NULL) return head;
    }
    p=t->next->next;
    q=t->next;
    t->next=p;
    delete(q);
    return head;
}
int search(node *head,int x){
   node *p=head;
   int i=1;
   while (p!=NULL)
   {
       if(p->d==x) {return i;}
       i++;
       p=p->next;
   }
   return -1; 
}
int main(){
node *head=NULL;
head=insertAtBeg(head,3);
head=insertAtBeg(head,4);
head=insertAtBeg(head,5);
head=insertAtEnd(head,15);
head=insertAtEnd(head,25);
head=insertAtEnd(head,35);
// head=delBig(head);
// head=delBig(head);
// head=delLast(head);
// head=delLast(head);
head=insertAtPos(head,55,1);
// head=insertAtPos(head,65,4);
// head=insertAtPos(head,66,8);
// head=delPos(head,1);
cout<<search(head,33);
cout<<endl;
print(head);
cout<<endl;
// rprint(head);
}