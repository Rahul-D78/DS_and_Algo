/* a1, a2, a3 ...... ai....aj....an
                     ak = k   j -i = largest

c1, c2, c3 ..... ci.......cj......cn

cj - ci = k 
ci = cj - k
*/

#include<iostream>
#include <unordered_map>
using namespace std;

int longestSubarraykSum(int arr[], int n, int k) {

	unordered_map<int, int >m;
	int pre = 0;
	int len = 0;

	for(int i =0;i< n;i++) {
		pre += arr[i];

        //change
        if(pre == k) {
			len = max(len, i+1);
		}
                         // _____
        // .....i ..... j  |k = 2|
             // 4       6
                     // pre - k             
		if(m.find(pre-k)!=m.end()) {
			len = max(len, i-m[pre-k]);
		}else {
			//store the first occ
			m[pre] = i;
		}
	}
	return len;
}


int main() {

	int n, k;
	cin>>n>>k;

	int arr[n];

	cout<<longestSubarray0Sum(arr, n, k)<<endl;

}                     