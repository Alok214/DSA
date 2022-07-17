#include<iostream>
using namespace std;
struct node{
    int d;
    node *next;
    node(int x){
        d=x;
        next=NULL;
    }
};
node *insertAtBig(node *head,int x){
    node *t=new node(x);
    t->next=head;
    return t;
}
void print(node *head){
    if(head==NULL) {cout<<"Empty\n"; return;}
    while (head!=NULL){
        cout<<head->d<<" ";
        head=head->next;
    }  
}
node *remov(node *head){
    if(head==NULL) return NULL;
    if(head->next==NULL) return head;
    node *p=head,*q=p->next;
    while (p->next!=NULL){
        if(p->d==q->d){
            q=q->next;
            delete(p->next);
            p->next=q;
        }
        else{
        p=p->next;
        q=q->next;
        }
    }
    return head;
} 
int main(){
    node *head=NULL;
    head=insertAtBig(head,3);
    head=insertAtBig(head,3);
    head=insertAtBig(head,4);
    head=insertAtBig(head,4);
    head=insertAtBig(head,4);
    head=insertAtBig(head,5);
    head=insertAtBig(head,11);
    head=insertAtBig(head,11);
    head=insertAtBig(head,22);
    head=insertAtBig(head,22);
    print(head);
    cout<<endl;
    remov(head);
    print(head);
}