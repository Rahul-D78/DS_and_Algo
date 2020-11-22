#include<iostream>
using namespace std;


void subsequence(int * in, int * out, int i, int j) {

	//base case 
	if(i == '\0') {

       out[j] = '\0';
       cout<<out[j];
       return;
	}

	//here we have to make two calls 
	//1. either we are including the current charecter 
	subsequence(in, out, i + 1, j + 1);

	//2. exclude the current charecter and only increment the i pointer
	subsequence(in ,out, i+1, j);

	return;
}

int main() {
  
  int input[] = {'a', 'b', 'c'};
  int output[100];

  subsequence(input, output, 0, 0);
 
  return 0;	
}