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
int ind=0;
node *deserialise(vector<int> v){
     if(ind==v.size()) return NULL;
     int val=v[ind++];
     if(val==-1) return NULL;
     node *root=new node(val);
     root->left=deserialise(v);
     root->right=deserialise(v);
     return root;
}
void pre(node *root){
    if(root==NULL) return;
    cout<<root->d<<" ";
    pre(root->left);
    pre(root->right);
}
int main(){
node *head=NULL;
vector<int> v={2,3,7,-1,-1,9,-1,-1,5,-1,8,-1,10,-1,-1};
head=deserialise(v);
pre(head);
}