#include<iostream>
using namespace std;
#include<unordered_set>


int main(){
	unordered_set<int>s;
	int n;
	cin>>n;
	for(int i =0;i<n;i++){
		int e;
		cin>>e;
		s.insert(e);
	}

	cout<<"Unique ele count = "<<s.size()<<endl;
	for(auto i:s){
		cout<<i<<endl;
	}
	return 0;
}