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
node *reverse(node *head){
    node *c=head;
    node *p=NULL;
    // if(head==NULL) {return NULL;}
    // if(head->next==NULL){
    //     return head;
    // }
    while (c!=NULL)
    {   node *n=c->next;
        c->next=p;
        p=c;
        c=n;   
    }
    return p;
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
    reverse(head);
    print(head);
}