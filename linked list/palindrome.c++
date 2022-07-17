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
bool palindrome(node *head){
    stack<int> s;
    for(node*cur=head;cur!=NULL;cur=cur->next){
        s.push(cur->d);
    }
    for(node*cur=head;cur!=NULL;cur=cur->next){
        if(s.top()!=cur->d) return false;
        s.pop();
    }
    return true;
}
int main(){
    node *head=NULL;
    head=insertAtBig(head,3);
    head=insertAtBig(head,7);
    head=insertAtBig(head,2);
    head=insertAtBig(head,2);
    head=insertAtBig(head,7);
    head=insertAtBig(head,3);
    print(head);
    cout<<endl;
    cout<<palindrome(head);
    // print(head);
}