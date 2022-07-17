#include<bits/stdc++.h>
using namespace std;
void closest(int arr[],int n,int k,int x){
priority_queue<pair<int, int> > pq;
	for (int i = 0; i < k; i++)
		pq.push({ abs(arr[i] - x), i });
	for (int i = k; i < n; i++) {
		int diff = abs(arr[i] - x);
		if (diff > pq.top().first)
			continue;
		pq.pop();
		pq.push({ diff, i });
	}
	while (pq.empty() == false) {
		cout << arr[pq.top().second] << " ";
		pq.pop();
	}
}
int main(){
    int n,k,x;
    cin>>n>>k>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    closest(a,n,k,x);
}


