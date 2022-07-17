#include<iostream>
using namespace std;
struct node
{
   int d;
   node *next;
   node(int x){
     d=x;
     next=NULL;
   }

};
void print(node *head){
    // node *t=head;
    while (head!=NULL)
    {
        cout<<head->d<<" ";
        head=head->next;
    } 
}
void rprint(node *head){
    if(head==NULL) return;
    cout<<head->d<<" ";
    rprint(head->next);
}
int main(){
node *head=new node(10);
head->next=new node(12);
head->next->next=new node(14);
head->next->next->next=new node(16);
print(head);
cout<<endl;
rprint(head);
}