#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<int> stack;
	stack.push(21);
	stack.push(22);
	stack.push(24);
	stack.push(25);
	cout<<"top = "<<stack.top()<<endl;
	while (!stack.empty()) {
		cout << stack.top() <<" ";
		stack.pop();
	}
}
