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
node *mid(node *head){
    if(head==NULL) return NULL;
    node*p=head;
    int ct=0;
    while (p!=NULL){
        p=p->next;
        ct++;
    }
    cout<<ct<<endl;
    node*q=head;
        for(int i=0;i<ct/2;i++){
            q=q->next;
        }  
    cout<<q->d<<endl;  
}
node *mid2(node* head){
    if(head==NULL) return NULL;
    node *fast=head,*slow=head;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->d;
}
void print(node *head){
    if(head==NULL) {cout<<"Empty\n"; return;}
    while (head!=NULL){
        cout<<head->d<<" ";
        head=head->next;
    }  
}
int main(){
    node *head=NULL;
    // int n;
    // cin>>n;
    head=insertAtBig(head,3);
    head=insertAtBig(head,7);
    head=insertAtBig(head,2);
    head=insertAtBig(head,4);
    head=insertAtBig(head,5);
    head=insertAtBig(head,11);
    head=insertAtBig(head,22);
    head=insertAtBig(head,22);
    // for(int i=0;i<n;i++){
    //     int t;
    //     cin>>t;
    //     head=mid(head,t);
    // }
    
    // print(head);
    cout<<endl;
    mid2(head);
}