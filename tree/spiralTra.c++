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
void spirallevelorederTra(node *root){
    if(root==NULL) return;
    queue<node*> q;
    stack<int> st;
    bool rev=false;
    q.push(root);
    while (!q.empty())
    {    
        int s=q.size();
        for(int i=0;i<s;i++){
        node * x=q.front();
       q.pop();
        if(rev) st.push(x->d);
         else cout<<x->d<<" ";
        if(x->left!=NULL) q.push(x->left);
        if(x->right!=NULL) q.push(x->right);
        }
    if(rev){
        while (!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }   
    }
    rev=!rev;
    cout<<endl;
       }
}
int main(){
node *root=new node(2);
root->left=new node(3);
root->right=new node(5);
root->left->left=new node(7);
root->left->right=new node(9);
root->right->right=new node(8);
root->right->right->right=new node(10);
spirallevelorederTra(root);
}