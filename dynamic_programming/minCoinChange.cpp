#include<iostream>
#include<climits>
using namespace std;

// here T stands for the type of the coins array that we have
int minCoins(int n, int coins[], int T, int dp[]){

   //base case 
	if(n == 0) {
		return 0;
	}

	//look up case
	if(dp[n] != 0) {
		return dp[n];
	}
	//rec case
	int ans = INT_MAX;
	for(int i =0;i< T;i++) {
		//make a call only if the current coin is less than the value of i.
		//e.g if it is 5 we cant pick very large coins whose value is bigger then x. 
		if(n - coins[i] >= 0) {
			int subprob = minCoins(n - coins[i], coins, T, dp);
			ans = min(ans, subprob+1);
		}
	}
	return dp[n] = ans;
}

int minCoinsBU(int n, int coins[], int T){
	int dp[100] = {0};

	//Iterate over all states from 1.....N
	for(int n = 1; n <= N; n++) {
		dp[n] = INT_MAX;

        for(int i =0;i< T;i++) {
        	if(n - coins[i] >= 0) {
        		int subprob = dp[n-coins[i]];
                dp[n] = min(dp[n], subprob+1);
        	}
        }
	}
	return dp[n];
}

int main() {
  
  int N = 15;
  int coins[] = {1, 7, 10};
  int dp[100] = {0};

  int T = sizeof(coins)/sizeof(int);

  cout<<minCoins(N, coins, T, dp)<<endl;

  return 0;	
}