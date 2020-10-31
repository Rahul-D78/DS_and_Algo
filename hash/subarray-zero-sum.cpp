/*Array contains a subarray whose sum is 0 or not

6 -1 2 -1 2 -1 ans --> true 

so we can calculate it by two ways 

1.Brute force 
2.cummulative approach / prefix array
3.repearing or not

basically we gonna take two pointers to check weather the 
result of them is 0 or not.

*/

#include<iostream>
#include<unordered_set>
using namespace std;


bool checkSum(int arr[], int n) {
	unordered_set<int> s;

    //first compute the prefix sum
	int pre = 0;
    //runnnig prefix sum to store in the array
	for(int i =0;i< n;i++) {
		pre+= arr[i];
		//check if the sum was already present in the se
            //this line means we call the find function that is not 
		    //equal to the end this means the num is present
			if(pre == 0 or s.find(pre)!=s.end()) {
			return true;
		}
		s.insert(pre);
	} 
	return false;
}

int main() {

  int n;
  cin>>n;

  int arr[n];
  for(int i =0;i<n;i++) {
  	cin>>arr[i];
  }

  if(checkSum(arr, n)) {
  	cout<<"yes";
  }else{
  	cout<<"no";
  }
  return 0;
}