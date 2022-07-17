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
// int res=0;
// int heightd(node *root){
//     if(root==NULL) return 0;
//     int lh=heightd(root->left);
//     int rh=heightd(root->right);
//     int res=max(res,1+lh+rh);
//     return max(lh,rh)+1;
// }
int diameter(node *root){
   if(root==NULL) return true;
   int d1=1+height(root->left)+height(root->right);
   int d2=diameter(root->left);
   int d3=diameter(root->right);
   return max(d1,max(d2,d3));
}
int main(){
node *root=new node(2);
root->left=new node(8);
root->right=new node(2);
root->left->left=new node(3);
root->left->right=new node(5);
root->right->right=new node(8);
root->right->right->right=new node(10);
cout<<diameter(root)<<endl;;
cout<<heightd(root);
}