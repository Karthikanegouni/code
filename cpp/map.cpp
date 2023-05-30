#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<map>



int main()
{
	map<int,char>m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int key;
		cin>>key;
		char value;
		cin>>value;
		m[key]=value;
	}

	for(pair<int,char> p:m){
		cout<<p.first<<" : "<<p.second<<endl;
	}

cout<<endl;
	unordered_map<int,char> um;
	cin>>n;
	for(int i=0;i<n;i++){
		int key;
		cin>>key;
		char value;
		cin>>value;
		um[key]=value;
	}
	for(pair<int,char> i:um){
		cout<<i.first<<" : "<<i.second<<endl;
	}



	return 0;
}