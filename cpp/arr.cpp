#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;

int main(){
  //   
  // array<int, 7> ar1{{3, 4, 5, 1, 2}};
  // array<int, 5> ar2 = {1, 2, 3, 4, 5};
  // array<string, 2> ar3 = {{string("a"), "b"}};

  // 
  // cout<<get<3>(ar1);
 
////    cout << "\nInitial ar1 : ";
  // for (auto i : ar1)
  //   cout << i << ' ';
 
////    // container operations are supported
  // sort(ar1.begin(), ar1.end());
 
////    cout << "\nsorted ar1 : ";
  // for (auto i : ar1)
  //   cout << i << ' ';
 
////    // Filling ar2 with 10
  // ar2.fill(10);
 
////    cout << "\nFilled ar2 : ";
  // for (auto i : ar2)
  //   cout << i << ' ';
 
////   
  // // ranged for loop is supported
  // cout << "\nar3 : ";
  // for (auto &s : ar3)
  //   cout << s << ' ';
    int a = 10;
    int b = 20;
    
    a = a^b;
    b = a^b;
    a= a^b;
    cout<<a<<" "<<b<<endl;
  return 0;
}

