#include <iostream>
using namespace std;

int main()
{
	int a[5];

    for(int i=0; i<=4;i++){
    	cin>>a[i];
    }	
    //update
    for(int i=0; i<=4;i++){
    	a[i] = a[i]*a[i];
    }

	for(int i=4; i>=0;i--) {
		cout<<a[i]<<",";
	}
	return 0;
}