#include<iostream>
using namespace std;

// bool isOdd(int n) {
// 	return n&1;
// }
// int getBit(int n, int i) {
// //Find ith Bit	(Right)
// 	int mask = (1<<i);
// 	int bit = (n&mask) > 0 ? 1:0;
// 	return bit;
// }

// int setBit(int n, int i) {
// //How to set a bit
//     int mask = (1<<i);
//     int ans = n|mask;
//     return ans;
// }

// void clearBit(int &n, int i) {
// //How to clear the  bit	
//   int mask = ~(1<<i);
//    n = n&mask;
 
// }

void updateBit(int &n, int i, int v) {
//How to update the bits
	int mask = ~(1<<i);
    int cleared_no = n&mask;
    n = cleared_no | (v<<i);

}

int clearLastBits(int n, int i) {
//Clear Last Bits
	int mask = (-1<<i);
	return n&mask;
}

int clearRangeOfBits(int n, int i, int j) {
//clear a Range of bits
    int ones = (~0);
    int a = ones << (j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    int ans = n&mask;
    return ans; 
}

int main() {

 int n;
 cin>>n;
 // cout<<isOdd(n)<<endl;
 // cout<<getBit(n,i);
 // 
// updateBit(n, 1, 1); 
// cout<<n<<endl;
cout<<clearRangeOfBits(n,1,3);


	return 0;
}