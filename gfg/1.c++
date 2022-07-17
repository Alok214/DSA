#include<bits/stdc++.h>
using namespace std;
int solve(int N, int a[]) {
        // code here
        int b[N];
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                if(a[i]>a[j]){
                    b[i]=a[i]-a[j];
                    break;
                }
            }
        }
        int t=0;
       for(int i=0;i<N-1;i++){
            for(int j=i+1;j<N-1;j++){
                if(a[i]>a[j]){
                    t=1;
                }
            }
        }
        if(t==0){
            return 1;
        }
        else return 0;
    }
int main(){
    int n;
    int a[n]={1,4,3,8};
    cout<<"ans ";
    cout<<solve(n,a);
}