#include<iostream>
using namespace std;

int maxSumDp(int * arr,int start, int n) {
  
  if(start > n) {
  	return 0;
  }
  
  int max_so_far = 0;
  int dp[100] = {0};
  dp[0] = a[0] > 0 ? a[0] : 0;

  for(int i =1;i< n;i++) {
  	dp[i] = dp[i-1] + a[i]

  	if(dp[i] < 0) {
  		dp[i] = 0; 
  	}
  	max_so_far = max(max_so_far, dp[i]);

  }
  
    return max_so_far;
}

int maxSum(int * arr, int n) {

	int currSum = 0;
	int maxSum = 0;

	for(int i =0; i< n;i++) {
		currSum += arr[i];

		if(currSum < 0) {
		   currSum = 0;
		}
	 
	 maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main() {

  //kadens algo
  int arr[] = {-3, 2, 5 , -1, 6, 3, -2,  7, -5, 2};
  int n = sizeof(int)/sizeof(arr);
  cout<<maxSum(arr, n);


  return 0;	
}

