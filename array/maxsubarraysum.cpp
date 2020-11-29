#include <iostream>
using namespace std;

int main() {

	int n;
    cin>>n;

    int a[100];
    int curentsum =0;
    int maxsum = 0;

    for(int i=0;i<n;i++) {

    	cin>>a[i];
    }

    for(int i=0;i<n;i++) {
    	for(int j=0;j<n;j++) {

            curentsum = 0;
    		for(int k=i;k<=j;k++) {
    		   curentsum += a[k];   
    		}
            
            if(curentsum > maxsum){
            	maxsum = curentsum;
            }
    		
    	    
    	}

    	cout<<"maximum sum is"<<maxsum<<endl;
    }


    return 0;

}