#include<iostream>
#include<unordered_set>
using namespace std;

int lcs(int arr[], int n) {

  unordered_set<int> s;

  for(int i =0; i< n;i++) {
  	s.insert(a[i])//O(1)
  }

  //iterate over all the elements and target those elements wher the streake can be statr

  for(int i =0;i< n;i++) {
  	if(s.find(a[i]-1)==s.end()) {
  		//a[i] is a stsrting point of a streak
  		//traverse the entire range that is contained in that streak
  		int next_no = a[i] + 1;
  		int streak_len = 1;
  		while(s.find(next_no)!=s.end()) {
  			next_no += 1;
  			streak_len += 1;
  		}
  		max_streak = max(streak_len, max_streak);
  	}
  }

  return max_streak;
}


int main() {
  
  int arr[] = {14, 5, 1, 2, 6, 3, 7, 8, 9, 13, 15, 11, 12, 13, 17} //10
  int n = sizeof(arr)/sizeof(int);

  cout<<lcs(arr, n)<<endl;

  return 0;	
}