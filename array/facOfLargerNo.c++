#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> factorial(int n){
       vector<int> v;
       v.push_back(1);
       for(int x=2;x<=n;x++){
           int c=0; // carry
           for(int i=0;i<v.size();i++){
               int val=v[i]*x+c;
               v[i]=val%10;
               c=val/10;
           }
           while(c!=0){
               v.push_back(c%10);
               c/=10;
           }
           
       }
       reverse(v.begin(),v.end());
       return v;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
} 