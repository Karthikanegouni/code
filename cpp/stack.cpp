#include<iostream>
#include<bits/stdc++.h>
using namespace std;


struct Mystack{
	int *arr;int cap;int top;
	Mystack(int c){
		cap=c;
		arr = new int [s];
		top=-1;
	};


void push(int ele){
	if(top==cap-1){
		cout<<"Overflow";
		return;
	}
	top = top+1;
	s[top]=ele;
}


// void display(){
// 	for(auto i:s){
// 		cout<<i<<" ";
// 	}
// 	cout<<endl;
// }
// }
int main(){
	Mystack s(5);
	// display();
	s.push(10);
	s.push(20);
	s.push(3);
	s.push(4);
	// s.display();
}