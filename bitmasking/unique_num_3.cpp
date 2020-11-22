#include <iostream>
using namespace std;

int main() {
  
  //we have to maintain a cnt array 
  //array of fixed size is always counted as a cont space --> o(1) space
  //becz 64 size is const and does not depend upon the value of n.	
  int cnt[64] = {0};

  int n, no;
  cin>>n;

  for(int i=0;i<n;i++) {
    cin>>no;
    //update the cnt array by extracting the bits
    //for the no we are extracting the zeroth bit and store it at the 0th index in the array
    int j =0;	
    while(no > 0) {
    	//if the last bit is one we will update the jth index by one otherwise by 0. 
    	int last_bit = (no&1);
    	cnt[j] += last_bit;
    	//for the next pos
    	j++;
    	//to get the last bit for the next pos we can
    	no = no>>1;
    }
  }

  //iterate over the array and reduce everything by mod 3
  int p = 1;
  int ans = 0;
  for(int i =0;i<64;i++) {
  	cnt[i] %= 3;
  	//we have to conver the zeors and one to decimal
    ans += (cnt[i]*p);
    p = p<<1; //or p = p * 2;
  }
  //print the final ans
  cout<<ans<<endl;


  return 0;	
}