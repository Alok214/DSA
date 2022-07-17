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
node *insort(node *head,int x){
    node *t=new node(x);
    if(head==NULL) return t;
    if(x<head->d){
        t->next=head;
        return t;
    }
    node*p=head;
    while(p->next!=NULL && p->next->d<x){
        p=p->next; 
    }
    t->next=p->next;
    p->next=t;
    return head;
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
    int n;
    cin>>n;
    // head=insort(head,3);
    // head=insort(head,7);
    // head=insort(head,2);
    // head=insort(head,4);
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        head=insort(head,t);
    }
    
    print(head);
}