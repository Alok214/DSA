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
node *lca(node* root,int n1,int n2){
    if(root==NULL) return NULL;
    if(root->d==n1 || root->d==n2){
        return root;
    }
    node* lca1=lca(root->left,n1,n2);
    node* lca2=lca(root->right,n1,n2);
    if(lca1!=NULL && lca2!=NULL) return root;
    if(lca1!=NULL) return lca1;
    else return lca2;
}
int main(){
node *root=new node(2);
root->left=new node(3);
root->right=new node(5);
root->left->left=new node(7);
root->left->right=new node(9);
root->right->right=new node(8);
root->right->right->right=new node(10);
cout<<lca(root,9,7)->d;
}