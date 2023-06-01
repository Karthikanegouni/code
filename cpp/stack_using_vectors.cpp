#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


struct Mystack{
	vector<int>v;
	void push(int x){
		v.push_back(x);
	}
	int pop(){
		int res=v.back();
		v.pop_back();
		return res;
	}
	int peek(){
		return v.back();
	}

	int size(){
		return v.size();
	}

	void display(){
		int t = v.size();
		for(int i=0;i<t;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}

	bool isEmpty(){
		return v.empty();
	}
};





int main(){

Mystack v; 
	v.push(10);
	v.push(20);
	v.push(70);
	v.push(60);
	v.push(40);
	v.push(30);
	v.display();
	cout<<v.pop();
	return 0;
}