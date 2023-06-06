#include<iostream>
#include<queue>
using namespace std;


int main(){
	queue<int> qu;
	qu.push(10);
	qu.push(20);
	qu.push(30);
	cout<<qu.size()<<endl;
	qu.pop();
	qu.push(40);
	cout<<qu.size()<<endl;
	cout<<qu.empty()<<endl;
	qu.pop();
	qu.pop();
	qu.push(50);
	qu.pop();
	qu.push(60);
	qu.pop();
	qu.push(70);
	qu.pop();
	qu.pop();
	cout<<qu.empty();
	return 0;
}