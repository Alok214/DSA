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
int height(node *root){
    if(root==NULL) return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
bool balanced(node *root){
   if(root==NULL) return true;
   int lh=height(root->left);
   int rh=height(root->right);
   return ((abs(lh-rh)<=1) && balanced(root->left) && balanced(root->right));
}
int main(){
node *root=new node(2);
root->left=new node(8);
root->right=new node(2);
root->left->left=new node(3);
root->left->right=new node(5);
// root->right->right=new node(8);
// root->right->right->right=new node(10);
cout<<balanced(root);
}