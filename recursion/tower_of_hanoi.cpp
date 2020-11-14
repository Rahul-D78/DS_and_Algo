#include<iostream>
using namespace std;

void tower(int n, char src, char dest, char helper) {

	//base case 
	if(n == 0) return;

	//rec case 
	//step-1 n-1 disks move src to helper
	tower(n-1, src, helper, dest);
	//step-2 nth disk move src dest
	cout<<endl;
	cout<<"move ring"<< n<< " from "<< src<< " to "<<dest;
	//step-3 move n-1 disks from helper to dets
	tower(n-1, helper, dest, src);
}


int main() {
    
    int n;
    cin>>n;
    
    tower(n, 'A', 'B', 'C');

	return 0;
}