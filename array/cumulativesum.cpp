#include<iostream>
using namespace std;

int main() {

    int ms=0;
    int cs=0;
    int left=-1;
    int right=-1;
    int csum[1000]={0};
    int a[1000];
    int n;
    cout<<"enter the number";
    cin>>n;

    cin>>a[0];
    a[0]=csum[0];
    cout<<"Enter the elements one by one";
    for(int i=0;i<n;i++) {
        cin>>a[i];
        csum[i] =csum[i-1] + a[i];
    }
    //generate all subarrays
    for(int i=0;i<n;i++) {
    	for(int j=i;j<n;j++) {

            cs = 0;
    		cs = csum[j]-csum[i-1];
    	
            if(cs > ms) {
            	ms = cs;
            	left = i;
            	right = j;
            }
    	}
    }
        cout<<"maximum sum is "<<ms<<endl;

        for(int k = left;k<right;k++) {
        	cout<<"elements are"<<a[k]<<endl;
        }
        return 0;
}