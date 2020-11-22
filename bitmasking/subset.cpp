#include <iostream>
using namespace std;

//finding subsequence/subset of a given string
//ex :- "abc" 
//ans = " ",a,ab,abc,b,bc,c
//subsequnce = contigous and vice-versa

void filterChars(int n, char a[]) {
	int j =0;

	while(n > 0) {
		int last_bit = (n&1);
		if(last_bit == 1) {
			cout<<a[j];
		}
		j++;
		n = n>>1;
	}
	cout<<endl;
}
 
void prinSubsets(char a[]) {

	int n = strlen(a);
	for(int i =0;i<(1<<n);i++) {
		filterChars(i, a);
	}
     return;

} 
int main() {
 
 char a[100];
 cin>>a; 

 prinSubsets(a);

 return 0;	
}