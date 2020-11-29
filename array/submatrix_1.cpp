#include<iostream>
using namespace std;

int main() {

	int a[10][10];
	int n,m;
	cin>>n>>m;

	for(int li=0;li<n;li++){
		for(int lj=0;lj<m;lj++) {
			for(int bi=li;bi<n;bi++) {
				for(int bj=lj;bj<m;bj++) {
					for(int i=li;i<bi;i++) {
						for(int j=lj;j<bj;j++) {
							cout<<a[i][j];
						}
					}
				}
			}

			cout<<endl;
		}
	}

	return 0;
}