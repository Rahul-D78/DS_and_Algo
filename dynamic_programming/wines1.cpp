#include<iostream>
using namespace std;

int maxPrice(int p[], int i, int j, int y, int dp[][100]) {

	if(i > j) {
		return 0;
	}

	if(dp[i][j] != 0) {
		return dp[i][j];
	}
	int exLeft  = p[i] * y + maxPrice(p, i+1, j, y+1, dp);
	int exRight = p[j] * y + maxPrice(p, i, j-1, y+1, dp);

	return dp[i][j] = max(exRight, exLeft);
	
}


int msin() {

 int p[] = {2, 3, 5 ,1, 4};
 int dp[100][100] = {0};
 int n = sizeof(int)/sizeof(p);
 int y = 1;

 cout<<maxPrice(p, 0, n-1, y, dp);

 return 0;	
}