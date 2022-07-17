#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    node* l,*r;
    int d;
    node(int x){
        d=x;
        l=r=NULL;
    }
}*root;
void verprint(node *root,int d,map<int,vector<int>> &m){
if(root==NULL) return;
m[d].push_back(root->d);
verprint(root->l,d-1,m);
verprint(root->r,d+1,m);
return;
}
int main(){
node*root=new node(1);
root->l=new node(2);
root->r=new node(3);
root->l->l=new node(4);
root->l->r=new node(5);
root->r->l=new node(6);
root->r->r=new node(7);
root->r->r->r=new node(9);
root->l->r->l=new node(8);
map<int,vector<int>> m;
 int d=0;
 verprint(root,d,m);
 for (auto p:m)
 {
    cout<<p.first<<"->";
    // for (auto x:p.second)
    // {
    //     cout<<x<<",";
    //     break;
    // }
   // vector<int> = p.second = v (let)
    for (int i = 0; i < p.second.size(); i++)
    {
        if(i==p.second.size()-1) 
        cout<<p.second[i]<<"->";
    }
    cout<<endl;
 }
 

}