
//print the longest common sting in between both of the string


#include <iostream>
#include <vector>
using namespace std;

int lcs(string s1, string s2, int i, int j, vector<vector<int> > &dp) {
	//base case 
	if(i == s1.length() or j == s2.length()) {
		return 0;
	}

	//check if a state is already computed or not
    if(dp[i][j] != -1) {
    	return dp[i][j];
    }

	//rec case
	if(s1[i] == s2[j]) {
		// return 1 + lcs(s1, s2, i+1, j+1, dp);
		return dp[i][j] = lcs(s1, s2, i+1, j+1, dp);
	}
	int opt1 = lcs(s1, s2, i+1, j, dp);
	int opt2 = lcs(s1, s2, i, j+1, dp);

	return dp[i][j] = max(opt2 ,opt1);
}

int main() {

    string s1 = "ABCD";
    string s2 = "ABEDG";

    // 2d DP vector

    vector<vector<int> > dp(s1, vector<int>(s2, -1)); //n1*n2 and each initialized with -1

	return 0;
}