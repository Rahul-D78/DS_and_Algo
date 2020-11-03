/* This is a classical problem which states that :-
There is a thief with specific bag size and he have to stole the products
with a specific weigth and price and he have to think for the maximum profit
he can get out of it.

0 and 1 knapsack means he have a choice of either he can pick it or leave it.


*/

#include<iostream>
using namespace std;

int knapsack( int prices[], int wts[], int N, int W) {

	if(N == 0 || W == 0) {
		return 0;
	}

	//there are two cases here either we include or exclude it
	int exc = 0;
	int inc = 0;

    if(wts[N-1] <= W) {
	   inc = prices[N-1] + knapsack(prices, wts, N - 1, W-wts[N-1]);
    }
	//exclude
	exc = 0 + knapsack(prices, wts, N-1, W);

	return max(inc, exc);
}

int main() {

  int wts[] = {2, 11, 3, 4};
  int prices[] = {5, 20, 20, 10};
  int N = 4;
  int W = 11;

  int maxPro = knapsack(prices, wts, N, W);
  cout<<maxPro<<endl;
  return 0;	
}