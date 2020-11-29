#include<iostream>
using namespace std;

void target_sum(int *a, int n, int tar) {

   int i = 0;
    int j = n-1;

    while(i <= j) {
    	if(a[i] + a[j] == tar) {
    		cout<<a[i]<<" and "<<a[j];
    		i++;
    		j--;
    	}else if(a[i] + a[j] > tar) {
    		j--;
    	}else{
    		i++;
    	}
    }
}


int main() {

    int a[1005];
	int n;
	cin>>n;

	for(int i=0;i<n;i++) {
		cin>>a[i];
	}

    int tar;
    cin>>tar;
    
    target_sum(a, n, tar);

	return 0;
}