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
void serialise(node *root,vector<int> &v){
    if(root==NULL) {v.push_back(-1); return;};
    v.push_back(root->d);
    serialise(root->left,v);
    serialise(root->right,v);
}
int main(){
node *root=new node(2);
root->left=new node(3);
root->right=new node(5);
root->left->left=new node(7);
root->left->right=new node(9);
root->right->right=new node(8);
root->right->right->right=new node(10);
vector<int> v;
serialise(root,v);
for(int x:v) cout<<x<<" ";
}