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
void removLoop(node *head){
    node *f=head,*s=head;
    while (f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
        if(s==f){break;}
    }
    if(s!=f) return;
    s=head;
    while (s->next!=f->next)
    {
        s=s->next;
        f=f->next;
    }
    f->next=NULL;

    // m-2
    // if(head==NULL||head->next==NULL)return;
    //    Node *slow=head;
    //    Node *fast=head;
    //    while(fast!= NULL && fast->next!=NULL){
    //        slow=slow->next;
    //        fast=fast->next->next;
    //        if(slow==fast)break;
           
    //    }
    //    if(slow!=fast) return;
    //    slow=head;
    //    while(slow!=fast){
    //        slow=slow->next;
    //        fast=fast->next;
    //    }
    //    while(slow->next!=fast){
    //        slow=slow->next;
    //    }
    //    slow->next=NULL;
    //    return;
}
// delete node with given pointer
// void deleteNode(Node *del)
//     {
//        Node *t=del->next;
//        del->data=t->data;
//        del->next=t->next;
//        delete(t);
       
//     }
int main(){
    node *head=NULL;
    head->next = head;
    head->next = new node(20);
    head->next->next = new node(15);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(10);
    head->next->next->next->next->next = head->next->next;
    print(head);
    cout<<endl;
    removLoop(head);
    print(head);
}