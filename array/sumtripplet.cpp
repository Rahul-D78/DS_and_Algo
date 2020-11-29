#include<iostream>
using namespace std;

int targetSum(int a[100],int N,int target) {

    
    int i = 0;
    int l=i+1;
    int r = N-1;

    while(l<r) {
    	int cs = a[i]+a[l]+a[r];

    	if(cs < target) {
           l++;
    	}
    	else if(cs > target) {
    		r--;
    	}else if(cs == target) {
            cout<<a[i]<< " , " <<a[l]<<" and "<<a[r]<<endl;

           i++;
           
    	}

    	}
    }
   
    		
    int main() {

    	int a[100];
    	int N,target;
    	cin>>N;

    	for(int i=0;i<N;i++) {
    		cin>>a[i];
    	}
    	cin>>target;

    	cout<<targetSum(a,N,target);
    	return 0;
	}

