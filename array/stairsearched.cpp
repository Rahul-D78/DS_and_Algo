#include<iostream>
using  namespace std;

void readMatrix(int a[][10],int R,int C) {
	for (int i = 0; i < R; i++) {
		for(int j =0;j<C;j++) {
			cin>>a[i][j];}}
		}
void printMatrix(int a[][10],int R,int C) {
	for (int i = 0; i < R; i++) {
		//for every row, we have iterate over every column
		for(int j =0;j<C;j++) {
            cout<<a[i][j]<<" ";
        }
		cout<<endl;}}

void staircase(int a[][10],int R, int C,int key) {

	//stairing from 0 to c-1
	int i=0, j =C-1;

	while(i<R && j>=0) {
		if(a[i][j]==key) {
		 cout<<"found at position "<<i<<endl;
		return ;
		}
		else if(a[i][j] > key) {
		   j--;
		}else {
		   i++;
		}}
	    cout<<"Element not Found";}

int main() {

    int a[10][10];
    int R,C,key;

    cin>>R>>C;
    cout<<"enter the key"<<endl;
    cin>>key;

    readMatrix(a,R,C);
    printMatrix(a,R,C);   

	return 0;
}
