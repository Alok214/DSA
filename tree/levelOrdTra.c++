#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int d;
    node *left,*right;
    node(int x){
       d=x;
       left=right=NULL;
    }
    
};
void levelorederTrav(node *root){
    if(root==NULL) return;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while (q.size()>1)
    {   
       node * x=q.front();
       q.pop();
       if(x==NULL){
           cout<<"\n";
           q.push(NULL);
           continue;
       }
        cout<<x->d<<" ";
        if(x->left!=NULL) q.push(x->left);
        if(x->right!=NULL) q.push(x->right);
       }
}
void levelorederTra(node *root){
    if(root==NULL) return;
    queue<node*> q;
    q.push(root);
    while (!q.empty())
    {   
        // int s=q.size();
        // for(int i=0;i<s;i++){
        node * x=q.front();
       q.pop();
        cout<<x->d<<" ";
        if(x->left!=NULL) q.push(x->left);
        if(x->right!=NULL) q.push(x->right);
        }
    //    cout<<endl;
    //    }
}
int main(){
node *root=new node(2);
root->left=new node(3);
root->right=new node(5);
root->left->left=new node(7);
root->left->right=new node(9);
root->right->right=new node(8);
root->right->right->right=new node(10);
// levelorederTrav(root);
levelorederTra(root);
}