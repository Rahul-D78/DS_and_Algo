/* 14, 5, 1, 2, 6, 7, 8, 9, 13, 14, 15, 11 ,12, 13

so we can solve it by many approaches
1. sorting
2. hashing
3. set

14, 5, 1, 2, 6, 7 , 8, 9, 13, 15

*  when insertion is performed
1. left shrinking
2. right shrinking
3. concatination
4. new strik  is getting generated (strik --> sequence of subsequences)

*  so the question is how do you know 4 can come before 5 (......)

how big is the strik length is ending at 3
*/

#include<iostream>
#include<unordered_map>
using namespace std;

int findLargestSeq(int arr[], int n)  {
  unordered_map<int , int> m; //number , streak length

  for(int i =0;i< n;i++) {
  	int no = arr[i];
  

  if(m.counnt(no-1)==0 and m.count(no+1)==0) {
  	m[no] = 1;
  }else if(m.count(no-1) and m.count(no+1)) {
  	int len1 = m[no-1];
  	int len2 = m[no+1];

  	int streak =len2 + len1 + 1;
  	//update the starting and ending index of the new streak length
  	m[no-len1] = streak;
  	m[no+len2] = streak;
   //right part is not present
  }else if(m.count(no-1) and !m.count(no +1 )) {
  	int len = m[no-1] //1, 2, 3,  8 ,9  no = 4
  	m[no-len] = len +1 ;
  	m[no] = len+1;
  }else {
  	int len = m[no+1];
  	m[no+len] = len+1;
  	m[no] =len+1;
  }

}

int largest = 0;

for(auto p:m) {
	largest = max(largest, p.second);
}

return largest;

}

int main() {

  int arr[] = {14, 5, 1, 2, 6, 7, 8, 9, 13, 14, 15, 11 ,12, 13}
  int n = sizeof(arr)/sizeof(int);

  cout<<findLargestSeq(a, n);
  return 0;
}