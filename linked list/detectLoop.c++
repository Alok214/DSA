#include<bits/stdc++.h>
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
bool isLoop(node *head){
    // node*t= new node(1);
    // node*c=head;
    // while (c!=NULL)
    // {
    //     if(c->next==NULL) return false;
    //     if(c->next==t) return true;
    //     node *n=c->next;
    //     c->next=t;
    //     c=n;
    // }
    // return false;

    // m-2
    // unordered_set<node*> s;
    // for (node* cur=head; cur!=NULL;cur=cur->next){
    //     if(s.find(cur)!=s.end()) return true;
    //     s.insert(cur);
    // }
    // return false;

    // m-3
    node *f=head,*s=head;
    while (f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
        if(s->d==f->d){return true;}
    }
    return false;
}
int main(){
    node *head=NULL;
    head=insertAtBig(head,3);
    // head=insertAtBig(head,7);
    // head=insertAtBig(head,2);
    // head=insertAtBig(head,4);
    // head=insertAtBig(head,5);
    // head=insertAtBig(head,11);
    // head=insertAtBig(head,22);
    // head=insertAtBig(head,22);
    print(head);
    cout<<endl;
    isLoop(head);
    print(head);
}