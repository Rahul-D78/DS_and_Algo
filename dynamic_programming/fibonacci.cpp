#include<iostream>
using namespace std;

int fib(int n){

	if(n == 0 or n == 1)  {
		return n;
	}

	//rec case 
	int ans = fib(n-1) + fib(n-2);
	return ans;
}


int main() {

	int n;
	cin>>n;

	cout<<fib(n);

  
  return 0;
} 