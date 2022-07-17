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
    while (head!=NULL){
        cout<<head->d<<" ";
        head=head->next;
    } 
}
node *revers(node *head){
    if(head==NULL || head->next==NULL) return head;
    node *cur=head,*p=NULL;
    while (cur!=NULL){
        p=cur->pre;
        cur->pre=cur->next;
        cur->next=p;
        cur=cur->pre;
    }
    return p->pre;   
}
int main(){
node *head=NULL;
head=insertBig(head,3);
head=insertBig(head,5);
head=insertBig(head,8);
head=insertEnd(head,18);
head=insertEnd(head,28);

print(head);
revers(head);
cout<<endl;
print(head);
}