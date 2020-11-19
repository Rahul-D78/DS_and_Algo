#include<iostream>
using namespace std;

int lastIndex(int * a, int i, int n, int M) {

	//base case 
	if(i == n) return -1;

	//rec case 
	int res = lastIndex(a, i+1, n, M);

	if(a[i] == M and res == -1) 
		return i;

	return res;
}

int main() {

  int n;
  cin>>n;

  int a[n];

  for(int i =0;i<n;i++) {
  	cin>>a[i];
  }

  int o = lastIndex(a, 0, n, 2);
  cout<<o<<endl;

  return 0;
}