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
node *deletion(node *root,int x){
     if(root==NULL) return root;
     if(x<root->d){
         root->left=deletion(root->left,x);
     }
     if(x>root->d){
         root->right=deletion(root->right,x);
     }
     else if(x==root->d){
         if(root->left==NULL){
             node *t=root->right;
             delete(root);
             return t;
         }
         else if(root->right==NULL){
             node *t=root->left;
             delete(root);
             return t;
         }
         else{
             node *succ=succesor(root);
             root->d=succ->d;
             root->right=deletion(root->right,succ->d);
         }
     }
     return root;
}
void in(node *root){
	if(root){
		in(root->left);
		printf("%d ",root->d);
		in(root->right);
	}
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
root=deletion(root,8);
cout<<endl;
in(root);
// cout<<search(root,4);
}