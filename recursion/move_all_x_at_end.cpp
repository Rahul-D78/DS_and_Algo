#include<iostream>
using namespace std;

void shift(string s, int i, int count) {

	//base case 
	if(i > s.length()) {
		while(count--) 
	     cout<<"x";		
		return;
	}

	//rec case 
	if(s[i] == 'x') 
		count ++;
	else 
		cout<<s[i];
        shift(s, i+1,count);
	
}

int main() {
  
  string s;
  cin>>s;

  shift(s, 0, 0);

  return 0;	
}