#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<map>
#include<unordered_set>

int main()
{
	map<int,char>m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		m[ele]++;
	}

	int max_key=0,max_value=0;
	for(pair<int,int>p:m){
		if(p.second>max_value)
		{
			max_value=p.second;
			max_key=p.first;
		}
	}

	cout<<"Max freq ele= "<<max_key;

	return 0;
}