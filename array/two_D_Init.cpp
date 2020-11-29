#include<iostream>
using namespace std;

int main() {

    char c[100];
    
    cin.getline(c,100);  //here 100 is the maxSize
    cout<<c;

    char para[100];
    cin.getline(para,100,'.'); //here '.' is the delimiter.
    cout<<para;
	return 0;
}