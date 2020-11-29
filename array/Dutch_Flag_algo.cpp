#include <iostream>
using namespace std;

int main() {

  int a[20];
	  int N;
	  cin>>N;

	  for(int i=0;i<N;i++) {
	  	cin>>a[i];
	  }
  int low = 0;
  int mid = 0;
  int high = N-1;

  while(mid <= high) {

  	if(a[mid] == 1) {
  		mid++;
  	}
  	else if(a[mid] == 2) {
  		swap(a[mid], a[high]);
  		high--;
  	}
  	else{
  		swap(a[mid], a[low]);
  			mid++;
  			low++;
  		}
  	}
 
  	for(int i=0;i<N;i++) {
  		cout<<a[i]<<" ";
  	}
    
    return 0;
}