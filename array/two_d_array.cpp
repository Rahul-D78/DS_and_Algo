#include<iostream>
using namespace std;

int main()
{
	char a[][4] = {{'a','b','c','\0'},{'d','e','f','\0'}};
	cout<<a[0][0]<<endl;
	cout<<a[0]<<endl;         //This is a proof of 2d-arrays are are placed in memory lineraly 
	
    char words[10][100] = {"apple","mango","grapes"};
    cout<<words[0]<<endl;
    cout<<words[1]<<endl;
    cout<<words[2]<<endl;

    // cin.getline(words[3],100); //param(location , maxSize)
    // cout<<words[3];

        


	return 0;
}