// for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 v.push_back(Mat[i][j]);
//             }
//         }
//         sort(v.begin(),v.end());
//         int x=0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 m[i].push_back(v[x++]);
//             }
//         }

/* C++ code to demonstrate a 2D vector
with elements(vectors) inside it. */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<int>> vect;
	
	for (int i = 0; i <3; i++)
	{
		for (int j = 0; j <3; j++)
		{   int x;
            cin>>x;
			vect[i].push_back(x);
		}	
	}
    cout<<vect.size()<<endl;
	cout<<vect[0].size()<<endl;
	for (int i = 0; i < vect.size(); i++)
	{
		for (int j = 0; j < vect[i].size(); j++)
		{
			cout << vect[i][j] << " ";
		}	
		cout << endl;
	}
	return 0;
}
