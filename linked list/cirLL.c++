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
    node *p=head;
    node *t=new node(x);
    if(head==NULL) {t->next=t;return t;}
    // m-1
    // while (p->next!=head){
    //     p=p->next;
    // }
    //  p->next=t;
    // t->next=head;
    // return t;

    // m-2
    t->next=head->next;
    head->next=t;
    int a=head->d;
    head->d=t->d;
    t->d=a;
    return head;
}
node *insertAtEnd(node *head,int x){
    node *p=head;
    node *t=new node(x);
    if(head==NULL) {t->next=t;return t;}
    // m-1
    // while (p->next!=head){
    //     p=p->next;
    // }
    //  p->next=t;
    // t->next=head;
    // return head;

    // m-2
    t->next=head->next;
    head->next=t;
    int a=head->d;
    head->d=t->d;
    t->d=a;
    return t;

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
    if(head==NULL) return;
    node *p=head;
    do{
        cout<<p->d<<" ";
        p=p->next;
    } while (p!=head);
    
}
node * delBig(node *head){
    if(head==NULL) return NULL;
    if(head->next==head) {delete(head); return NULL;}
    node *p=head;
    // m-1
    // while (p->next!=head){
    //     p=p->next;
    // }
    // p->next=head->next;
    // delete(head);
    // return p->next;

    // m-2
    node *q=head->next;
    int a=head->d;
    head->d=q->d;
    q->d=a;
    head->next=q->next;
    delete(q);
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
    if(head->next==head) {delete(head); return NULL;}
    node *q=head->next;
    int a=head->d;
    head->d=q->d;
    q->d=a;
    head->next=q->next;
    delete(q);
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
// head=insertAtPos(head,55,1);
// head=insertAtPos(head,65,4);
// head=insertAtPos(head,66,8);
head=delPos(head,6);
// cout<<search(head,33);
cout<<endl;
print(head);
cout<<endl;
// rprint(head);
}