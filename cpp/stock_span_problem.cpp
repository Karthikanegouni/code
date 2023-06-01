#include<iostream>
using namespace std;

void printspan(int arr[],int n){
	for(int i =0;i<n;i++){
		int span=1;
		for(int j=i;j>=0&& arr[j]<=arr[i];j--){
			span++;
		}
			cout<<span<<" ";
	}
}


int main(){
		int arr[]={18,12,13,14,11,16};
		int n =6;
		printspan(arr,n);

	return 0;
}