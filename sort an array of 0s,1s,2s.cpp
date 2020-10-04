#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<v.size();i++)
	    cin>>v[i];
	    sort(v.begin(),v.end());
	    for(auto x:v)
	    {
	    cout<<x<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
