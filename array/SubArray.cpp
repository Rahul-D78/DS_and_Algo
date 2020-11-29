#include<iostream>
#include<climits>
using namespace std;

int main() {

	int a[100];

	int n;
	cin>>n;

	for(int i=0;i<n;i++) {
		cin>>a[i];
	}

	int cs = 0;

	for(int i=0;i<n;i++) {
		for(int j=i;j<n;j++) {
			
			for(int k=i;k<=j;k++) {
				cout<<"curremnt sum is "<<a[i]+a[j]<<endl;
				cout<<a[k]<<",";
			}
			cout<<endl;
		}
	}
	return 0;
}