#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


int main(){
	vector<int> v={2,4,3,6,8,7,1};
	//iterators
	vector<int> :: iterator it;
	for(it=v.begin();it<v.end();it++)
		cout<<*it<<" ";
	cout<<endl;

	// vector :: iterator it;
	for(auto it=v.begin();it<v.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;


	v.insert(v.begin()+3,100);

		for(auto it=v.begin();it<v.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;

	v.erase(v.end()-5);
	for(auto it=v.begin();it<v.end();it++){
		cout<<*it<<" ";
	}	
	cout<<endl;

	v.erase(v.end()-5,v.end()-1);
	for(auto it=v.begin();it<v.end();it++){
		cout<<*it<<" ";
	}	

	cout<<endl;


	sort(v.begin(),v.end());
	for(auto it=v.begin();it<v.end();it++){
		cout<<*it<<" ";
	}	
cout<<endl;
	sort(v.begin(),v.end(),greater<int>());
	for(auto it=v.begin();it<v.end();it++){
		cout<<*it<<" ";
	}	
	return 0;

}