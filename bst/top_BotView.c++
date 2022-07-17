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
node *insertion(node *root,int x){
    if(root==NULL) return new node(x);
    if(x<root->d){root->left=insertion(root->left,x);}
    if(x>root->d){root->right=insertion(root->right,x);}
    return root;
}
void in(node *root){
	if(root){
		in(root->left);
		printf("%d ",root->d);
		in(root->right);
	}
}
void topview(node *root){
map<int,int> m;
queue<pair<node*,int>> q;
q.push({root,0});
while (!q.empty()){
   auto p=q.front();
   node *cur=p.first;
   int horDis=p.second;
   if(m[horDis]==0) m[horDis]=(cur->d);
    q.pop(); 
   if(cur->left!=NULL) q.push({cur->left,horDis-1});
   if(cur->right!=NULL) q.push({cur->right,horDis+1});
}
for(auto x:m){
 cout<<x.second<<" ";
    // cout<<endl;
}
}
void botview(node *root){
map<int,int> m;
queue<pair<node*,int>> q;
q.push({root,0});
while (!q.empty()){
   auto p=q.front();
   node *cur=p.first;
   int horDis=p.second;
   m[horDis]=(cur->d);
    q.pop(); 
   if(cur->left!=NULL) q.push({cur->left,horDis-1});
   if(cur->right!=NULL) q.push({cur->right,horDis+1});
}
for(auto x:m){
 cout<<x.second<<" ";
    // cout<<endl;
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
botview(root);
cout<<endl;
topview(root);

}