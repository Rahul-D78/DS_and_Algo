#include <iostream>
using namespace std;

//dp in a top down approach

int fib(int n, int dp[]) {

	//base case 
	if(n == 0 or n == 1) {
		return n;
	}

	if(dp[n] != 0) {
		return dp[n];
	}

	int ans = fib(n-1, dp) + fib(n-2, dp);
	return dp[n] = ans;
}

int fibBU(int n) {

	int dp[100] = {0};

	dp[1] = 1;

	for(int i = 2;i<= n;i++){
	   dp[i] = dp[i-1] + dp[i-2];
	}

	return dp[n];

}

int fibSpaceOpt(int n) {

	if(n == 0 or n == 1) {
		return n;
	}

	int a = 0;
	int b = 1;
	int c;

	for(int i= 2;i<= n;i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;

}
int main() {

  int dp[100] = {0};
  int n;
  cin>>n;

  cout<<fibBU(n);  

  return 0;
}
