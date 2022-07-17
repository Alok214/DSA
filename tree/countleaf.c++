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
// count leaf
int count(node *root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    int lh=count(root->left);
    int rh=count(root->right);
    return lh+rh;
}
int main(){
node *root=new node(2);
root->left=new node(8);
root->right=new node(2);
root->left->left=new node(3);
root->left->right=new node(5);
root->right->right=new node(8);
root->right->right->right=new node(10);
cout<<count(root)<<endl;;

}