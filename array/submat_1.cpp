#include<iostream>
using namespace std;

int subMat(int a[][100], int n, int m) {


int csum =0;
int msum =0;
for(int li=0;li<n;li++){
		for(int lj=0;lj<m;lj++) {
			for(int bi=li;bi<n;bi++) {
                for(int bj=lj;bj<m;bj++) {
                	csum =0;
					for(int i=li;i<=bi;i++) {
						for(int j=lj;j<=bj;j++) {
							csum += a[i][j];
						}
					}
					msum = max(csum, msum);
					cout<<endl;
				}
			}
			cout<<endl;
		}
	}
	
	return msum;
}	

int main() {

	int a[100][100];
	int n,m;
	cin>>n>>m;

	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cin>>a[i][j];
		}
	}

    cout<<subMat(a,n,m)<<endl;


	return 0;
}