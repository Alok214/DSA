#include<bits/stdc++.h>
using namespace std;
int diff(int a[],int n,int m){
if(m>n) return -1;
sort(a,a+n);
int res=a[m-1]-a[0];
for (int i = 1; i+m-1 < n; i++)
{
    res=min(res,(a[i+m-1]-a[i]));
}
return res;
}
int main(){
    int a[7]={7,3,1,4,9,12,56};
    int x=diff(a,7,3);
}