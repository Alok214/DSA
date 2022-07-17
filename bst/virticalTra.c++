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
void vtraversal(node *root){
map<int,vector<int>> m;
queue<pair<node*,int>> q;
q.push({root,0});
while (!q.empty()){
   auto p=q.front();
   node *cur=p.first;
   int horDis=p.second;
   m[horDis].push_back(cur->d);
    q.pop(); 
   if(cur->left!=NULL) q.push({cur->left,horDis-1});
   if(cur->right!=NULL) q.push({cur->right,horDis+1});
}
for(auto x:m){
    vector<int> v=x.second;
    for(int y:v) cout<<y<<" ";
    cout<<endl;
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
cout<<endl;
vtraversal(root);

}