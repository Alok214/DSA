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
node* pairreverse(node *head){
    // m-1 not correct in every case
    // node *c=head;
    // while (c!=NULL && c->next!=NULL)
    // {
    //     swap(c->d,c->next->d);
    //     c=c->next->next;
    // }
    // m-2 
    if(head==NULL || head->next==NULL) return head;
    node *c=head->next->next;
    node *pre=head;
    head=head->next;
    head->next=pre;
    while (c!=NULL && c->next!=NULL)
    {
        pre->next=c->next;
        pre=c;
        node*next=c->next->next;
        c->next->next=c;
        c=next;
    }
    pre->next=c;
    return head;
    
}
int main(){
    node *head=NULL;
    head=insertAtBig(head,3);
    head=insertAtBig(head,7);
    head=insertAtBig(head,2);
    head=insertAtBig(head,4);
    head=insertAtBig(head,5);
    head=insertAtBig(head,11);
    // head=insertAtBig(head,22);
    // head=insertAtBig(head,22);
    print(head);
    cout<<endl;
    pairreverse(head);
    print(head);
}