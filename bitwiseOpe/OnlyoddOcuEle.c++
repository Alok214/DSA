#include<iostream>
using namespace std;
int main(){
    int n=9;
    int a[n]={4,3,5,5,5,4,5,3,3};
    int ans=a[0];
    for (int i = 1; i < n; i++)
    {
        ans=ans^a[i];
    }
    cout<<ans;
}
