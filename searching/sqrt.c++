#include<bits/stdc++.h>
using namespace std;
int sq1(int x){
    int i=1;
    while (i*i<=x){
        i++;
    }
    return i-1;
    
}
int main(){
    // cout<<floor(sqrt(16));
    cout<<sq1(25);
}