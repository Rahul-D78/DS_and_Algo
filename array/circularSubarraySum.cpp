#include<iostream>
using namespace std;

int kadens(int *a, int n) {
	int cs = 0;
	int ms = 0;

	for(int i =0;i<n;i++) {
		cs += a[i];

		if( cs < 0){
			cs = 0;
		}

		ms = max(cs, ms);
	}
	return ms;
}

int circularsum(int *a , int n) {
	int max_kaden = kadens(a, n);

	int max_cirsum = 0;

	//Then we have to invert the sign of all the elements
	for(int i=0;i<n;i++) {
		a[i] = -a[i];
		max_cirsum += a[i];
	}

	//Then we have to add both the sums
	//1. the sum obtained by the kadens alg and the sum obtained by the cirsum

	max_cirsum = max_cirsum + max_kaden;

	return (max_cirsum > max_kaden)? max_cirsum: max_kaden;
}

int main() {

	int a[1000];
    int n,t;
    cin>>t;

    while(t--) {
    cin>>n;

    for(int i=0;i<n;i++) {
    	cin>>a[i];
    } 

    cout<<circularsum(a, n)<<endl;
    }
}