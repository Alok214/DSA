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
int findMax(node *root)
    {
        if(root==NULL) return INT_MIN;
return max(root->d,max(findMax(root->right),findMax(root->left)));
    }
    int findMin(node *root)
    {
    if(root==NULL) return INT_MAX;
return min(root->d,min(findMin(root->right),findMin(root->left)));

    }
int main(){
node *root=new node(2);
root->left=new node(3);
root->right=new node(5);
root->left->left=new node(7);
root->left->right=new node(9);
root->right->right=new node(8);
root->right->right->right=new node(10);
cout<<findMax(root);
cout<<endl;
cout<<findMin(root);
}