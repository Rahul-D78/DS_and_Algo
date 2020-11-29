#include<iostream>
using namespace std;

int main() {

 //Here the constrains are so high so we have to solve it by charecter array
 char a[50];
 cin>>a;

 int i =0;

 //we can not subtract with the same digit otherwise it is going to be zero in the array

 if(a[i] == '9') {
 	i++;
 }

 //iterate over the remaining charecters
 for( ; i != '\0';i++){
 	  //converting charecter into an integer array
      int digit = a[i] - '0';

      if(digit >= '5') {
      	digit = 9 - digit;
      	digit = digit + '0';
      }
 }

  cout<<a<<endl; 	
  return 0;
}