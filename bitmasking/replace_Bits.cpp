#include<iostream>
using namespace std;

//you are given 2 32-bit numbers N and M. two bit positons
//i and j. write a method to set all bits between  i and j.
// in N equal to M (e.g. , M become a substring  of N located at i and starting at j).

//ex :- input : N = 10000000000,
// M = 10101, i = 2, j = 6
//output : N = 10001010100

int clearRangeOfBits(int n, int i, int j) {
//clear a Range of bits
    int ones = (~0);
    int a = ones << (j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    int ans = n&mask;
    return ans; 
}

int replaceBits(int n, int m, int i, int j) {
	int n_ = clearRangeOfBits(n , i, j);

	int ans = n_ | (m<<i);
	return ans;
}

int main() {

  int n = 15;
  int i = 1;
  int j = 3;
  int m = 2; 

  cout<<replaceBits(n, m, i, j);

  return 0;	
}