#include<bits/stdc++.h>
using namespace std;  
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 
class Solution 
{
    public:
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,[](Job a,Job b){
            return a.profit>b.profit;
        });
        bool vis[n]={0};
        int day=0,profit=0;
        for(int i=0;i<n;i++){
            for(int j=min(n,arr[i].dead-1);j>=0;j--){
            if(vis[j]==false){
                day+=1;
                profit+=arr[i].profit;
                vis[j]=true;
                break;
            }
        }
    }
    return {day,profit};
    }
}; 
int main() 
{ 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}