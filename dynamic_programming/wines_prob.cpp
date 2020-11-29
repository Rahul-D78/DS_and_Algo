#include<iostream>
using namespace std;

int maxPrice(int p[], int i, int j, int y) {

	if(i > j) {
		return 0;
	}
	int exLeft  = p[i] * y + maxPrice(p, i+1, j, y+1);
	int exRight = p[j] * y + maxPrice(p, i, j-1, y+1);

	return max(exRight, exLeft);
	
}


int msin() {

 int p[] = {2, 3, 5 ,1, 4};
 int n = sizeof(int)/sizeof(p);
 int y = 0;

 cout<<maxPrice(p, 0, n-1, y);

 return 0;	
}