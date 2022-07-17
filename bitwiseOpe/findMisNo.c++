#include<iostream>
using namespace std;
int main(){
    int n=5;
    int a[]={1,2,4,5};
    int ans=a[0];
    for (int i = 1; i <=n; i++)
    {
        ans=ans^a[i]^i;
    }
    cout<<ans;
}
