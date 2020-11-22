#include<iostream>
using namespace std;

int main() {

  int n;
  cin>>n;
  int ans=0;
  int no;
  cin>>no;
  for(int i=0;i<n;i++) {

  	
  	ans = ans ^ no; 
  }

  cout<<ans;

	return 0;
}