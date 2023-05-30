#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


// bool comparator_func(pair<int,int>a,pair<int,int>b){  
// 	return a<b; //for ascending order
// 	return a>b; //for descending order
// }


bool comparator_func(pair<int,int>a,pair<int,int>b){  
	if(a.first!=b.first)
		return a.first<b.first;						//for asc and descending 
	else
		return a.second>b.second;
}

int main(){
	//vector of pairs
	int n;
	cin>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		v.push_back({a,b});
	}
	cout<<"Ele in vector of pair"<<endl;
	for(int i =0 ;i<v.size();i++){
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	cout<<endl;
	cout<<"Ele in vector of pairs in ascending order"<<endl;
	sort(v.begin(),v.end());
	for(int i =0 ;i<v.size();i++){
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	cout<<endl;
	cout<<"Ele in vector of pairs in Descending order"<<endl;


	sort(v.begin(),v.end(),greater<pair<int,int>>());

	for(auto a:v){
		cout<<a.first<<" "<<a.second<<endl;
	}


cout<<endl;
cout<<"Using comparator to sort I as  and  II as dec "<<endl;
	sort(v.begin(),v.end(),comparator_func);
			for(auto a:v){
		cout<<a.first<<" "<<a.second<<endl;
	}

	return 0;
}