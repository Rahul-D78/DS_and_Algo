#include<iostream>
using namespace std;

int main() {

    int a[2][3][2] = {
    	             { {0,1}, {2,3}, {4,5},},
    	             { {6,7}, {8,9}, {10,11}}

                      };

    for(int i=0;i<2;i++) {
    	for(int j=0;j<3;j++) {
    		for(int k=0;k<4;k++) {
    			cout<<"Element at index ["<<i<<"] ["<<j<<"] ["<<k<<"] ="<<a[i][j][k]<<endl;
    		}
    	}
    }                  

	return 0;
}