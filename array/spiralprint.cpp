#include <iostream>
using namespace std;

void readMatrix(int a[][10],int R,int C) {
	for (int i = 0; i < R; i++) {
		for(int j =0;j<C;j++) {
			cin>>a[i][j];
		}
	}
}
void printMatrix(int a[][10],int R,int C) {
	for (int i = 0; i < R; i++) {
		//for every row, we have iterate over every column
		for(int j =0;j<C;j++) {
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

void spiralPrint(int a[][10],int R,int C) {
	int startRow = 0, startCol =0;
	int endRow = R-1, endCol = C-1;

	while(startRow<=startCol && startCol>=endCol) {
		
		//print startrow

		for(int j=startRow;j<=endCol;j++) {
			cout<<a[startRow][j]<<" ";
		}
		    startRow++;

		//printing end col
		for(int i=startRow;i<=endRow;i++) {
			cout<<a[endCol][i]<<" ";
		}    
		    endCol--;

		for(int i=endCol;i>=startCol;i--) {
			cout<<a[endRow][i]<<" ";
		}    
		    endRow--;

		for(int i=endRow;i>=startRow;i--) {
			cout<<a[startCol][i]<<" ";
		}    
		    startCol++;
	}

}

int main() {

    int a[10][10];
	int R,C;
	cin>>R>>C;

	readMatrix(a,R,C);

	printMatrix(a,R,C);

	spiralPrint(a,R,C);

	return 0;
}