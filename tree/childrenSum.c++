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
bool childsum(node *root){
   if(root==NULL) return true;
   if(root->left==NULL && root->right==NULL) return true;
   int sum=0;
   if(root->left!=NULL) sum+=root->left->d;
   if(root->right!=NULL) sum+=root->right->d;
   return ((sum==root->d) && childsum(root->left) && childsum(root->right));
}
int main(){
node *root=new node(20);
root->left=new node(8);
root->right=new node(12);
root->left->left=new node(3);
root->left->right=new node(5);
// root->right->right=new node(8);
// root->right->right->right=new node(10);
cout<<childsum(root);
}