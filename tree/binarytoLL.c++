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
node *pre=NULL;
node *bttoll(node *root){
    if(root==NULL) root;
    node head=bttoll(root->left);
    if(pre==NULL) {head==root;}
    else{
        root->left=pre;
        pre->right=root;
    }
    pre=root;
    bttoll(root->right);
    return head;
}
int main(){
node *root=new node(2);
root->left=new node(3);
root->right=new node(5);
root->left->left=new node(7);
root->left->right=new node(9);
root->right->right=new node(8);
root->right->right->right=new node(10);
cout<<bttoll(root);
} 