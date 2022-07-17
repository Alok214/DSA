#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int print(priority_queue<int ,vector<int> , greater<int> > p){
    while (!p.empty())
    {
        cout<<p.top();
        p.pop();
    }
    cout<<endl;
}
int main(){
int no;
priority_queue<int ,vector<int> , greater<int> > p;
int c=0;
int k=3;
while (scanf("%d",&no)!=EOF)
{
    if(no==-1){
        print(p);
    }
    else if(c<k){
        p.push(no);
    }
    else{
        if(no>p.top()){
            p.pop();
            p.push(no);
        }
    }
}
}