#include<iostream>
using namespace std;
#include<vector>


int main(){
	vector<int> v={2,4,3,6,8,7,1};
	//iterators
	vector<int> :: iterator it;
	for(it=v.begin();it<v.end();it++)
		cout<<*it<<" ";
	cout<<endl;

	// vector :: iterator it;
	for(auto it=v.begin();it<v.end();it++)
		cout<<*it<<" ";
	return 0;
}