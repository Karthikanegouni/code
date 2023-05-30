#include<iostream>
using namespace std;
#include<vector>



// int main(){
// 	vector<int> v;
// 	v.push_back(2);
// 		cout<<"size = "<<v.size()<<endl;
// 	cout<<"capacity = "<<v.capacity()<<endl;
// 	v.push_back(3);
// 		cout<<"size = "<<v.size()<<endl;
// 	cout<<"capacity = "<<v.capacity()<<endl;
// 	v.push_back(4);
// 		cout<<"size = "<<v.size()<<endl;
// 	cout<<"capacity = "<<v.capacity()<<endl;
// 	v.push_back(2);
// 		cout<<"size = "<<v.size()<<endl;
// 	cout<<"capacity = "<<v.capacity()<<endl;
// 	v.push_back(65);
// 		cout<<"size = "<<v.size()<<endl;
// 	cout<<"capacity = "<<v.capacity()<<endl;
// 	v.push_back(5);
// 		cout<<"size = "<<v.size()<<endl;
// 	cout<<"capacity = "<<v.capacity()<<endl;
// 	v.push_back(9);
// 		cout<<"size = "<<v.size()<<endl;
// 	cout<<"capacity = "<<v.capacity()<<endl;
// 	v.push_back(2);
// 		cout<<"size = "<<v.size()<<endl;
// 	cout<<"capacity = "<<v.capacity()<<endl;
// 	v.push_back(11);
// 		cout<<"size = "<<v.size()<<endl;
// 	cout<<"capacity = "<<v.capacity()<<endl;
// 	v.push_back(12);
// 	cout<<"size = "<<v.size()<<endl;
// 	cout<<"capacity = "<<v.capacity()<<endl;
	
// 	v.pop_back();
// 	cout<<"size = "<<v.size()<<endl;
// 	cout<<"capacity = "<<v.capacity()<<endl;
// 	v.pop_back();
// 	v.pop_back();
// 	cout<<"size = "<<v.size()<<endl;
// 	cout<<"capacity = "<<v.capacity()<<endl;
// 	return 0;
// }



int main()
{
	int n;
	cin>>n;
	vector <int> v;
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		v.push_back(ele);
	}

	cout<<"size = "<<v.size()<<endl;
	cout<<"capacity = "<<v.capacity()<<endl;
	cout<<"ele in vector"<<endl;
	cout<<"for each loop"<<endl;
	for(int a:v){  //instead use auto in place of int
		cout<<a<<" ";
	}
	cout<<endl;

	int i =0;
	cout<<"while loop"<<endl;
	while(i<v.size()){
		cout<<v[i]<<" ";
		i++;
	}
	cout<<endl;

	cout<<"using do while"<<endl;
	i=0;
	do{
		cout<<v[i]<<" ";
		i++;
	}
	while(i<v.size());

	return 0;
}