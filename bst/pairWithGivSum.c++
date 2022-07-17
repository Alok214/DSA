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

void printk(node *root,vector<int> &v){
	if(root!=NULL){
		printk(root->left,v);
		v.push_back(root->d);
		printk(root->right,v);
	}
}
bool isPair(node *root,unordered_set<int> &s,int sum){
  if(root==NULL) return false;
  if(isPair(root->left,s,sum)==true) return true;
  if(s.find(sum-root->d)!=s.end()) return true;
  else s.insert(root->d);
  return isPair(root->right,s,sum);
}
int main(){
node *root=NULL;
root=insertion(root,8);
root=insertion(root,4);
root=insertion(root,12);
root=insertion(root,3);
root=insertion(root,15);
root=insertion(root,7);
vector<int> v;
printk(root,v);
for(int x:v) cout<<x<<" ";
cout<<endl;
unordered_set<int> s;
cout<<isPair(root,s,17);
}