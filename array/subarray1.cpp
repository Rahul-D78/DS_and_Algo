#include<iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(a)/ sizeof(int);

	for(int i=0;i<n;i++) {
		for(int j =i;i<n;j++) {
			for(int k = i;k<=j;k++) {
				cout<<a[k];
			}
		}
	}

	return 0;
}