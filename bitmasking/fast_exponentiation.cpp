#include<iostream>
using namespace std;

//Exponentiation/power using Bitmasking
int power_optimised(int a, int b) {

   int ans = 1;

   while(b > 0) {
     	int last_bit = (b&1);
   	    if(last_bit) {
   	       //if the last bit is set we 
   	       //have to multiply our ans with the current value of a.	
   		   ans = ans*a;
   	    }
   	    //and every time we go to the next pos we square it up
   	    a = a*a;
   	    //and the discard the last bit
   	    b = b>>1;
   }
   return ans;
}

int main() {

 int a, b;
 cin>>a>>b;

 cout<<power_optimised(a,b);

 return 0;
}