#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int minSteps(int  n, int dp[]) {
	if(n == 1) {
		return 0;
	}

	// look up if n is already computed
    if(dp[n] != 0) {
    	return dp[n];
    }

	int opt1, opt2, opt3 = INT_MAX;

	if(n % 3 == 0) {
		opt1 = minSteps(n/3, dp) + 1;
	}
	if(n % 2 == 0) {
	    opt2 = minSteps(n/2, dp) + 1;
	}
	    opt3 = minSteps(n/3, dp) + 1;
	
	int ans = min(min(opt1, opt2), opt3);

    return dp[n] = ans;
}

int minStepsBU(int n){

	int dp[100] = {0};

	//because it is 0+1
	dp[0] = 1;
	int opt1, opt2, opt3 = INT_MAX;

    for(int i =0;i<=n;i++) {
       if(n % 2 == 0) {
       	opt1 = dp[i/2];
       }
        if(n % 3 == 0) {
       	opt2 = dp[i/3];
       }
       opt3 = dp[i-1];
       dp[i] = min(min(opt1, opt2), opt3) + 1;
   }
   return dp[n];
} 

int main() {
  
  int n;
  cin>>n;
  int dp[100] = {0};

  cout<<minSteps(n, dp);

  return 0;
}