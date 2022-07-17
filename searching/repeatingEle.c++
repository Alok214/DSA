#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[6]={2,1,0,3,5,1};
    bool vis[5]={false,false,false,false,false};
    for (int i = 0; i < 6; i++)
    {
        if(vis[a[i]]) {cout<<a[i];
        return 0;}
        vis[a[i]]=true;
    }
    
}