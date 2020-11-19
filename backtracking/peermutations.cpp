/* Given a string s and the task is to find out all the unique permutations of
that string */

#include<iostream>
using namespace std;

void permute(char * in, int i) {

	//base case 
	if(in[i] == '\0') {
		cout<<in<< " ,";
		return;
	}

	for(int j = i; in[j] != '\0';j++) {
		swap(in[i], in[j]);
		permute(in, i+1);
		//Backtrack
        swap(in[i], in[j]);
	}

	return;
}

int main() {

 char in[100];
 cin>>in;

 permute(in, 0);

 return 0;	
}