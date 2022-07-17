// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};
class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n)
    {
        sort(arr,arr+n,[](auto x,auto y){
            double a=x.value/x.weight;
            double b=y.value/y.weight;
            return a>b;
        });
        float profit=0;
        for(int i=0;i<n;i++){
            if(arr[i].weight<w){
                w=w-arr[i].weight;
                profit+=arr[i].value;
            }
            else{
                profit+= arr[i].value*(double)(w/arr[i].weight);
            }
        }
        return profit;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends