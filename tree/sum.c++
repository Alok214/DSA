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
int sum(node *root){
   if(root!=NULL){
    return sum(root->left)+sum(root->right)+root->d;
   } 
  //
//    if(root==NULL) return 0;
//        return sum(root->left)+sum(root->right)+root->d;
}
int main(){
node *root=new node(2);
root->left=new node(8);
root->right=new node(2);
root->left->left=new node(3);
root->left->right=new node(5);
root->right->right=new node(8);
root->right->right->right=new node(10);
cout<<sum(root);
}