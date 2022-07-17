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
bool search(node *root,int x){
    if(root==NULL) return false;
    if(x==root->d) return true;
    if(x<root->d){return search(root->left,x);}
    if(x>root->d){return search(root->right,x);}
}
node *insertion(node *root,int x){
    if(root==NULL) return new node(x);
    if(x<root->d){root->left=insertion(root->left,x);}
    if(x>root->d){root->right=insertion(root->right,x);}
    return root;
}
node *succesor(node *cur){
cur=cur->right;
while (cur!=NULL && cur->left!=NULL) cur=cur->left;
return cur;
}
node *floor(node *root,int x){
    node *res=NULL;
    while (root!=NULL){
        if(x==root->d) return root;
        if(x<root->d) root=root->left;
        else if(x>root->d){
            res=root;
            root=root->right;
        } 
    }
    return res;
}
node *ceil(node *root,int x){
    node *res=NULL;
    while (root!=NULL){
        if(x==root->d) return root;
        if(root->d<x) root=root->right;
        else if(x<root->d){
            res=root;
            root=root->left;
        } 
    }
    return res;
}
void in(node *root){
	if(root){
		in(root->left);
		printf("%d ",root->d);
		in(root->right);
	}
}
int minDiff(node *root, int K){
        int d=INT_MAX;
        while(root!=NULL){ 
           d=min(d,abs(root->d-K));
           if(root->d==K) return 0;
           else if(root->d>K) root=root->left;
           else root=root->right;       
       }
       return d;
    }
int main(){
node *root=NULL;
root=insertion(root,8);
root=insertion(root,4);
root=insertion(root,12);
root=insertion(root,3);
root=insertion(root,15);
root=insertion(root,7);
in(root);
int k=14;
cout<<endl;
cout<<floor(root,k)->d<<endl;
// cout<<endl;
cout<<ceil(root,k)->d<<endl;

// cout<<minDiff(root,k);
}