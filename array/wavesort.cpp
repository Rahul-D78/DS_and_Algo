#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	int a[] = {1,3,4,2,7,8};
	int n = sizeof(a)/sizeof(int);

	for(int i=0;i<n;i++) {

		//check for left element.
        if(i > 0 && a[i] < a[i-1]) {
        	cout<<"left "<<a[i]<<" "<<a[i-1]<<endl;
			swap(a[i], a[i-1]);
		}
		//check for right element
        if(i < n &&  a[i] < a[i+1]) {
        	cout<<"         right "<<a[i]<<" "<<a[i+1]<<endl;
        	swap(a[i],a[i+1]);
        }
    }

	for(int i=0;i<n;i++) {
		cout<<a[i]<<" ";
	}

	return 0;
}