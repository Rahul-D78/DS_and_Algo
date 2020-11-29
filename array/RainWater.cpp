#include<iostream>
using namespace std;

int waterTrapped(int a[],int n) {

    int res = 0;

    //For all the elements in the array
    for(int i=0;i<n-1;i++) {

      //right elements
      int right = a[i];
      for(int j=0;j<i;j++) {
      	right = max(right,a[j]);
      }

      //Left elements
      int left = a[i];
      for(int j =i+1;j<n;j++) {
      	left = max(left,a[j]);
      }
      res = res + min(left,right) - a[i];
    }

    return res;
}

int main() {

	int a[100];
	int n;
  cin>>n; 

  for(int i=0;i<n;i++) {
      cin>>a[i];
    }
	cout<<waterTrapped(a,n);
	return 0;
}