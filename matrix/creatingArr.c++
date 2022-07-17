#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m=3,n=2;
int **arr;
arr = new int*[m];
for (int i = 0; i <m; i++)
{
    arr[i]=new int[n];
}
// or 
int *a[m];
for (int i = 0; i <m; i++)
{
    a[i]=new int[n];
}
 
for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
    cin>>a[i][j];
}
}
for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
    cout<<a[i][j]<<" ";
}cout<<endl;
}



}