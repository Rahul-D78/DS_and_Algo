#include<iostream>
using namespace std;

void convert(int n) {

    int ans = 0;
    int p = 1;

	while(n > 0) {
		int last_bit = (n&1);
		//we have to convert the number into an base 10 intizer
		ans += p*last_bit;
		p = p*10;
		n = n >> 1;
	}
}

int main() {
 
  int n;
  cin>>n;

  convert(n);

  return 0;	
}