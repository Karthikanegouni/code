#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<map>


int main(){
		// unordered_map<int,char>c;
		map <int,char>c;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int k;
			cin>>k;
			char v;
			cin>>v;
			c[k]=v;
		}

		for(auto a:c){
			cout<<a.first<<" "<<a.second<<endl;
		}
	return 0;
}