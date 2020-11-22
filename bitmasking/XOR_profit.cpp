/* We are given two coins of value x and y. 
We have to find the maximum of value of a XOR b where x <= a <= b <= y

Input :
5
6
ans ---   3
Explanation :
------------------
If a and b are taken to be 5. Then a xor b = 0
If a and b are taken to be 6. Then a xor b = 0
If a is 5 and b is 6. Then a xor b is 3.
*/

#include < iostream >
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int xr = a ^ b;
int msbpos=0;
while(xr){
msbpos + +;
xr = xr>>1;
}
int maxxr=0;
int x=1;
while(msbpos- -){
maxxr +=x;
x = x<<1;
}

cout<<maxxr;
}