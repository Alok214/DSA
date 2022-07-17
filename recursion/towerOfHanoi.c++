#include<bits/stdc++.h>
using namespace std;
int toh(int n,char a,char b,char c){
    if(n==1){
        cout<<"Move 1 from "<<a<<" to "<<c<<endl;
        return 0;
    }
    toh(n-1,a,c,b);
    cout<<"Move "<<n<<" from "<<a<<" to "<<c<<endl;
    toh(n-1,b,a,c);
}
int main(){
  toh(3,'a','b','c');
}