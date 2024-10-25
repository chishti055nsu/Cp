#include<bits/stdc++.h>

using namespace std ;
using ll = long long ;
int main()
{
	string s ;
	cin>>s;
	reverse(s.begin(),s.end());
	ll sum = 0 ;
	vector<ll>v;
	for(int i = 0 ; i<s.size();++i)
	{
		//vector<ll>v;
		if(isdigit(s[i]))

		{
		    v.push_back(s[i]-'0');
		}

	}

	for(int i = 0 ; i<v.size();++i)
	{
		
		v[i]=v[i]*pow(16,i);
		sum+=v[i];
	}

	cout<<sum<<endl;

	


}