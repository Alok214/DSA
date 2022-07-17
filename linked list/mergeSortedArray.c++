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
node* merge(node *head1,node *head2){
    node *a=head1,*b=head2;
    if(a==NULL) return b;
    if(b==NULL) return a;
    node *head=NULL,*tail=NULL;
    if(a->d<=b->d){head=tail=a;a=a->next;}
    else {head=tail=b; b=b->next;}
    while (a!=NULL && b!=NULL){
       if(a->d<=b->d){tail->next=a; tail=a;a=a->next;}
       else {tail->next=b; tail=b;b=b->next;}
    }
    if(a==NULL) tail->next=b;
    else tail->next=a;
    return head;
}
int main(){
    node *head1=NULL;
    node *head2=NULL;
      head1=insertAtBig(head1,31);
    head1=insertAtBig(head1,25);
       head1=insertAtBig(head1,14);
     head1=insertAtBig(head1,11);
   head1=insertAtBig(head1,7);
    head1=insertAtBig(head1,3);
    head2=insertAtBig(head2,27);
       head2=insertAtBig(head2,22);
    head2=insertAtBig(head2,8);
    head2=insertAtBig(head2,2);
  

    
    print(head1);
    cout<<endl;
    print(head2);
    cout<<endl;
    merge(head1,head2);
    print(head1);
}