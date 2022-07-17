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
node *EvenOdd(node *head){
  node *os=NULL,*oe=NULL,*es=NULL,*ee=NULL;  
  for (node *cur=head;cur!=NULL;cur=cur->next){
   int x=cur->d;
   if(x%2==0){
       if(es==NULL){
           es=cur;
           ee=cur;
       }
       else{
           ee->next=cur;
           ee=cur;
       }
   }
   else{
      if(os==NULL){
           os=cur;
           oe=cur;
       }
       else{
           oe->next=cur;
           oe=cur;
       } 
   }
  }
  if(os==NULL || es==NULL){return head;}
  ee->next=os;
  oe->next=NULL;
  return es;
}
int main(){
    node *head=NULL;
    // head=insertAtBig(head,3);
    // head=insertAtBig(head,7);
    head=insertAtBig(head,2);
    head=insertAtBig(head,4);
    // head=insertAtBig(head,5);
    // head=insertAtBig(head,11);
    head=insertAtBig(head,22);
    head=insertAtBig(head,22);
    print(head);
    cout<<endl;
    EvenOdd(head);
    print(head);
}