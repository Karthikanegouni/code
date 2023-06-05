#include<iostream>
#include<stack>
using namespace std;



void printspan(int arr[],int n){
	stack<int>s;
	s.push(0);
	cout<<1<<" ";
	for(int i=0;i<n;i++){
		while(s.empty()==false && arr[s.top()]<=arr[i]){
			s.pop();
		}
		int span=s.empty() ? i+1 : i-s.top();
		cout<<span<<" ";
		s.push(i);
	}
}


int main(){

	int arr[]={18,12,13,14,11,16,100};
	int n=7;
	printspan(arr,n);
	return 0;
}





//closest previous greater ele
// closest previous smaller ele
// closest next greater ele
// closest next smaller ele
// maximun rectangle problem
