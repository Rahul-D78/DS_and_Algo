#include<iostream>
#include<cstring>
using namespace std;

void rmDuplicate(string *s) {

	//base case
    if(s[0] == '\0') return;

    //rec case
    if(s[0] == s[1]) {
    	int i = 0;
    	while(s[i] != '\0') {
    		s[i] = s[i+1];
    		i++;
    	}
    	rmDuplicate(s);
    }
    rmDuplicate(s+1);

} 

int main() {

    char a[1000];

    cin>>a;

    rmDuplicate(a);

    for(int i =0;a[i] != '\0';i++) {
      cout<<a[i];
    }
	return 0;
}