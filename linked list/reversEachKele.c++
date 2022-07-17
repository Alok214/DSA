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
node *reverse(node *head,int k){
    node *c=head,*p=NULL,*n=NULL;
    int ct=0;
    while (c!=NULL && ct<k)
    {   n=c->next;
        c->next=p;
        p=c;
        c=n; 
        ct++;  
    }
    if(n!=NULL){
       node* rest_head=reverse(n,k);
       head->next=rest_head;
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
    reverse(head,3);
    print(head);
}