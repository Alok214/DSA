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
void dis(node *root){
        if(root==NULL) {return;}
        dis(root->left);
        cout<<root->d<<" ";
        dis(root->right);
}
int height(node *root){
    if(root==NULL) return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
    // edge=height-1
}
// print node at distance k
void disk(node *root,int k){
    if(root==NULL) return;
    if(k==0) cout<<root->d<<" ";
    else{
        disk(root->left,k-1);
        disk(root->right,k-1);
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
// dis(root);
// cout<<endl<<height(root)<<endl;
// disk(root,2);
// cout<<endl;
levelorederTrav(root);
}