#include<iostream>
#include<algorithm>
using namespace std;

// Given two numbers X and Y, how should mycmp() decide which number to put first – we compare two numbers XY (Y appended at the end of X) and YX (X appended at the end of Y). If XY is larger, then X should come before Y in output, else Y should come before. For example, let X and Y be 542 and 60. To compare X and Y, we compare 54260 and 60542. Since 60542 is greater than 54260, we put Y first.

// so this line image

// is checking whether number xy is greater than YX or not ,if it is then function will return true and swapping will not happen.
// otherwise function will return false and in that case x and y will swap its position.

// note x-> a , y->b( same thing)

bool compare(string a , string b) {
   
    string ab = a.append(b);
    string ba = b.append(a);

    return ab.compare(ba) > 0;	

}

int main() {

  int t;
  while(t--) {
  	int n;
  	cin>>n;

  	string s[n];
  	for(int i=0;i<n;i++) {
  		cin>>s[i];
  	}
  	sort(s, s+n, compare);

  	for(int i =0;i<n;i++) {
  		cout<<s[i];
  	}
  	cout<<endl;
  }

  return 0;	
}