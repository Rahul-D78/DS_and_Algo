#include <iostream>
#include <string>
using namespace std;

string replace(string &s, int i = 0) {

   if(s.length() <= 1) 	return s;
   

   //rec case 
   string res = replace(s, i+1);

   if(s[i] == 'p' and s[i+1] < s.length() and s[i+1] == 'i') {

   	res = res.substr(0, i) + "3.14" + res.substr(i+2);
   }
   
   return s;	

}

int main() {
    
    string s;
    cin>>s;

    s = replace(s);
    cout<<s;

	return 0;
}
